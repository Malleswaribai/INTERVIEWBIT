/*
Problem Description

Given a binary tree A of integers. Return an array of integers representing the right view of the Binary tree.

Right view of a Binary Tree: is a set of nodes visible when the tree is visited from Right side.



Problem Constraints
1 <= Number of nodes in binary tree <= 105

0 <= node values <= 109 



Input Format
First and only argument is an pointer to the root of binary tree A.



Output Format
Return an integer array denoting the right view of the binary tree A.



Example Input
Input 1:

        1
      /   \
     2    3
    / \  / \
   4   5 6  7
  /
 8 
Input 2:

    1
   /  \
  2    3
   \
    4
     \
      5


Example Output
Output 1:

 [1, 3, 7, 8]
Output 2:

 [1, 3, 4, 5]


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
    if(root==NULL) return {};
    vector<int>res;
    vector<vector<int>>v;
    queue<TreeNode*>q1;
    q1.push(root);
    while(!q1.empty()){
        queue<TreeNode*>q2;
        vector<int>cur;
        while(!q1.empty()){
            TreeNode *temp=q1.front();
            q1.pop();
            cur.push_back(temp->val);
            if(temp->left) q2.push(temp->left);
            if(temp->right) q2.push(temp->right);
        }
        v.push_back(cur);
        q1=q2;
    }
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i].size()==1 && j==0){
                res.push_back(v[i][j]);
            }else if(j==v[i].size()-1){
                res.push_back(v[i][j]);
            }
        }
    }
    return res;
}
