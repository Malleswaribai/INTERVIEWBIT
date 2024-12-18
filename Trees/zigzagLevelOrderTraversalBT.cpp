/*
Given a binary tree, return the zigzag level order traversal of its nodes’ values. (ie, from left to right, then right to left for the next level and alternate between).

Example : 

Given binary tree

    3
   / \
  9  20
    /  \
   15   7
return

[
         [3],
         [20, 9],
         [15, 7]
]
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) {
    if(root==NULL) return {{}};
    vector<vector<int>>v;
    queue<TreeNode*>q1;
    q1.push(root);
    bool flag=true;
    while(!q1.empty()){
        queue<TreeNode*>q2;
        vector<int>temp;
        while(!q1.empty()){
            TreeNode *cur=q1.front();
            q1.pop();
            temp.push_back(cur->val);
            if(cur->left) q2.push(cur->left);
            if(cur->right) q2.push(cur->right);
        }
        if(flag==true){
            v.push_back(temp);
            flag=false;
        }else{
            reverse(temp.begin(),temp.end());
            v.push_back(temp);
            flag=true;
        }
        q1=q2;
    }
    return v;
}
