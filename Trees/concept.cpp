/*
tress: like in linked list it has next but next of array, means array*[]next
->it if unidirectional
->tree is a subset of graphs, linked list is a subset of trees, and also a subset of praph
binary tree:a parent node can have at max 2 child nodes
binray search tree:the values on the left of root node should be always less than the root node and 
                   and the values on the right of it shhould be always greater than the root node
full binary tree: either parent has two childs or no childs
*/
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
};
void dfs(TreeNode *root){
    if(root==NULL) return;
    dfs(root->left);
    dfs(root->right);
    cout<<root->val<<" ";
}
void bfs(TreeNode *root){
    if(root==NULL) return;
    queue<TreeNode*>q1;
    q1.push(root);
    while(!q1.empty()){
        queue<TreeNode*>q2;
        while(!q1.empty()){
            TreeNode *cur=q1.front();
            q1.pop();
            cout<<cur->val<<" ";
            if(cur->left!=NULL) q2.push(cur->left);
            if(cur->right!=NULL) q2.push(cur->right);
        }
        cout<<endl;
        q1=q2;
    }
}
void bfs1(TreeNode *root){
    if(root==NULL) return;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode *temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
    return;
}
int main(){
    TreeNode *n1=new TreeNode(1), *n2=new TreeNode(2), *n3= new TreeNode(3), *n4=new TreeNode(4), *n5=new TreeNode(5);
    TreeNode *n6=new TreeNode(6), *n7=new TreeNode(7);
    n1->val=1, n2->val=2, n3->val=3, n4->val=4, n5->val=5, n6->val=6, n7->val=7;
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->right=n6;
    n4->left=n7;
   /*
    ->for traversing a tree there are two approaches bfs and dfs
    ->dfs:depth first search, first process childrens of parent node and then process parent node
   */
   /*
    bfs: it traverses a node and visits all adjacent nodes and then traverses , level by level
   */
   dfs(n1);
   bfs(n1);
   bfs1(n1);
    return 0;
}