/*
Problem Description
 
 

Given a binary tree, return the inorder traversal of its nodes values.

NOTE: Using recursion is not allowed.



Problem Constraints
 1 <= number of nodes <= 105



Input Format
First and only argument is root node of the binary tree, A.



Output Format
Return an integer array denoting the inorder traversal of the given binary tree.



Example Input
Input 1:

   1
    \
     2
    /
   3
Input 2:

   1
  / \
 6   2
    /
   3
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
 void dfs(TreeNode *root,vector<int>&res){
     if(!root) return;
     dfs(root->left,res);
     res.push_back(root->val);
     dfs(root->right,res);
 }
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int>res;
    dfs(root,res);
    return res;
}
