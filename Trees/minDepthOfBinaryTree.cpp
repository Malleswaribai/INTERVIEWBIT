/*
Problem Description
 
 

Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
NOTE: The path has to end on a leaf node.


Input Format
The first argument is a TreeNode, pointing to the root of the binary tree.


Output Format
Return an integer equal to the minimum depth of the tree.


Example Input
  1
 /
2


Example Output
2


Example Explanation
Minimum Depth is 2, which is from 1 -> 2.
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
int Solution::minDepth(TreeNode* root) {
    if(!root) return 0;
    int mnLeft=minDepth(root->left);
    int mnRight=minDepth(root->right);
    if(mnLeft==0 || mnRight==0){
        return max(mnLeft,mnRight)+1;
    }else{
        return min(mnLeft,mnRight)+1;
    }
}
