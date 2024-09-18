/*
Given a linked list A and a value B, partition it such that all nodes less than B come before nodes greater than or equal to B. 

 You should preserve the original relative order of the nodes in each of the two partitions. 



Problem Constraints
 1 <= |A| <= 106 

 1 <= A[i], B <= 109 



Input Format
 The first argument of input contains a pointer to the head to the given linked list. 

 The second argument of input contains an integer, B. 



Output Format
 Return a pointer to the head of the modified linked list. 



Example Input
 Input 1: 

A = [1, 4, 3, 2, 5, 2]
B = 3
 Input 2: 

A = [1, 2, 3, 1, 3]
B = 2


Example Output
 Output 1: 

[1, 2, 2, 4, 3, 5]
 Output 2: 

[1, 1, 2, 3, 3]
*//**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int k) {
    auto cur=head;
    if(cur==NULL) return NULL;
    vector<int>v;
    vector<int>v1;
    while(cur){
        if(cur->val<k){
            v.push_back(cur->val);
        }else{
            v1.push_back(cur->val);
        }
        cur=cur->next;
    }
    for(auto &x:v1) v.push_back(x);
    ListNode *Head=NULL;
    ListNode *last=NULL;
    for(int i=0; i<v.size(); i++){
        ListNode *temp=new ListNode(v[i]);
        if(Head==NULL){
            Head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return Head;
}
