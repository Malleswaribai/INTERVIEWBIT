/*
Problem Description
 
 

You are given the root of a binary tree A.
You have to find out the number of parent - child relationship whose values are consecutive numbers.



Problem Constraints
1 <= Number of nodes in the tree <= 105


Input Format
The first argument is the root of the binary tree A.


Output Format
Return a single integer denoting the number of consecutive parent - child relationships.


Example Input
Input 1:
A =  2
    / \
   1   3
Input 2:

A =  5
    / \
   1   3
      / \
     1   4


Example Output
Output 1:
2
Output 2:

1
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
int countConsecutive(TreeNode* root, int& ans) {
    if (root == NULL) return 0;
    if (root->left && abs(root->val - root->left->val) == 1) {
        ans++;
    }
    if (root->right && abs(root->val - root->right->val) == 1) {
        ans++;
    }
    countConsecutive(root->left, ans);
    countConsecutive(root->right, ans);
    return ans;
}

int Solution::consecutiveNodes(TreeNode* root) {
    int ans = 0; 
    return countConsecutive(root, ans);
}
