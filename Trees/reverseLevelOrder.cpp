/*
Problem Description

Given a binary tree, return the reverse level order traversal of its nodes values. (i.e, from left to right and from last level to starting level).



Problem Constraints
1 <= number of nodes <= 5 * 105

1 <= node value <= 105



Input Format
First and only argument is a pointer to the root node of the Binary Tree, A.



Output Format
Return an integer array denoting the reverse level order traversal from left to right.



Example Input
Input 1:

    3
   / \
  9  20
    /  \
   15   7
Input 2:

   1
  / \
 6   2
    /
   3


Example Output
Output 1:

 [15, 7, 9, 20, 3] 
Output 2:

 [3, 6, 2, 1]

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
vector<int> Solution::solve(TreeNode* root) {
    // if(root==NULL) return {};
    // vector<int>res;
    // queue<TreeNode*>q;
    // q.push(root);
    // while(!q.empty()){
    //     TreeNode *cur=q.front();
    //     q.pop();
    //     res.push_back(cur->val);
    //     if(root->left) q.push(root->left);
    //     if(root->right) q.push(root->right);
    // }
    // reverse(res.begin(),res.end());
    // return res;
  vector<vector<int>>v;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        queue<TreeNode*>qNext;
        vector<int>curLevel;
        while(!q.empty()){
            auto cur=q.front();
            q.pop();
            curLevel.push_back(cur->val);
            if(cur->left!=NULL) qNext.push(cur->left);
            if(cur->right!=NULL) qNext.push(cur->right);
        }
        v.push_back(curLevel);
        q=qNext;
    }
    reverse(v.begin(),v.end());
    vector<int>res;
    for(auto &x:v){
        for(auto &y:x){
            res.push_back(y);
        }
    }
    return res;
}
