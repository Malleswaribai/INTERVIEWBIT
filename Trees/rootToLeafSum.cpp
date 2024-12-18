/*
Problem Description
 
 

Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.
An example is the root-to-leaf path 1->2->3 which represents the number 123.
Find the total sum of all root-to-leaf numbers % 1003.


Problem Constraints
0 <= Node.val <= 9


Input Format
The first argument is TreeNode A, pointing to the root of the tree.


Output Format
Return an integer equal to the total sum of all root-to-leaf numbers % 1003.


Example Input
    1
   / \
  2   3


Example Output
25


Example Explanation
    1
   / \
  2   3
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = (12 + 13) % 1003 = 25 % 1003 = 25.
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
 void rootToLeafSum(TreeNode *root,int currentSum,int &totalSum){
     if(root==NULL) return;
     currentSum=(currentSum*10+root->val)%1003;
     if(root->left==NULL && root->right==NULL){
         totalSum=(totalSum+currentSum)%1003;
         return;
     }
     rootToLeafSum(root->left,currentSum,totalSum);
     rootToLeafSum(root->right,currentSum,totalSum);
 }
int Solution::sumNumbers(TreeNode* root) {
    if(root==NULL) return 0;
    int totalSum=0;
    rootToLeafSum(root,0,totalSum);
    return totalSum;
}
