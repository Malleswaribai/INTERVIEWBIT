/*
Given a binary tree, return the preorder traversal of its nodes’ values.

Example :

Given binary tree

   1
    \
     2
    /
   3
return [1,2,3].
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
     res.push_back(root->val);
     dfs(root->left,res);
     dfs(root->right,res);
 }
vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int>res;
    dfs(root,res);
    return res;
}
