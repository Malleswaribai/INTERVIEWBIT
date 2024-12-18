/*
Problem Description
 
 

You are given the root of a binary tree A, you need to return the absolute difference between sum of all covered elements and the sum of all uncovered elements.

In a binary tree, a node is called Uncovered if it appears either on left boundary or right boundary. Rest of the nodes are called covered.



Problem Constraints
1 <= Number of nodes in the binary tree <= 105


Input Format
The first argument is the root of the binary tree A.


Output Format
Return a single integer denoting the absolute difference of the sum of covered and uncovered nodes.


Example Input
Input 1:
    2
   / \
  1   4
 /   / \
6  10   5
Input 2:

      1
     /
    2
   /
  3


Example Output
Output 1:
8
Output 2:

6
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
long Solution::coveredNodes(TreeNode* root) {
    if(root==NULL) return 0;
    vector<vector<int>>v;
    queue<TreeNode*>q1;
    q1.push(root);
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
        v.push_back(temp);
        q1=q2;
    }
    long uncoveredSum=0;
    long coveredSum=0;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(j==0 || j==v[i].size()-1){
                uncoveredSum+=v[i][j];
            }else{
                coveredSum+=v[i][j];
            }
        }
    }
    return abs(uncoveredSum-coveredSum);
}