/*
Problem Description
 
 

Given a binary search tree, write a function to find the kth smallest element in the tree.
NOTE: You may assume 1 <= k <= Total number of nodes in BST


Input Format
The first argument is the root node of the binary tree.
The second argument B is an integer equal to the value of k.


Output Format
Return the value of the kth smallest node.


Example Input
  2
 / \
1   3


and k = 2



Example Output
2

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
     if(root==NULL) return;
     res.push_back(root->val);
     dfs(root->left,res);
     dfs(root->right,res);
 }
int Solution::kthsmallest(TreeNode* root, int k) {
    vector<int>res;
    dfs(root,res);
    sort(res.begin(),res.end());
    int ans=res[k-1];
    return ans;
}
