/*
Problem Description
 
 

Given a linked list A, swap every two adjacent nodes and return its head.

NOTE: Your algorithm should use only constant space. You may not modify the values in the list; only nodes themselves can be changed.



Problem Constraints
 1 <= |A| <= 106 



Input Format
 The first and the only argument of input contains a pointer to the head of the given linked list. 



Output Format
 Return a pointer to the head of the modified linked list. 



Example Input
 Input 1: 

 A = 1 -> 2 -> 3 -> 4
 Input 2: 

 A = 7 -> 2 -> 1


Example Output
 Output 1: 

 2 -> 1 -> 4 -> 3
 Output 2: 

 2 -> 7 -> 1

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* head) {
    //here i swaped values
    auto cur=head;
    auto cur1=head->next;
    while(cur && cur1){
        auto x=cur->val;
        cur->val=cur1->val;
        cur1->val=x;
        if(cur->next==NULL){
             cur=NULL;
             break;
        }
        if(cur1->next==NULL){
            cur1=NULL;
            break;
        }
        cur=cur->next->next;
        cur1=cur1->next->next;
    }
    return head;
    
    
    
    // the case where we should not chenge values only nodes can be changed
    
    vector<ListNode*> arr; 
    auto cur = head;
    while(cur) arr.push_back(cur) , cur=cur->next;
    int n = arr.size();
    
    for(int i = 0; i<n; i+=2) {
        if(i+1 < n) {
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i= 0; i<n;i++) {
        if(i == n-1) {
            arr[i]->next = NULL;
            break;
        }
        arr[i]->next = arr[i+1];
    }
    if(arr.empty()) return NULL;
    return arr[0];
}
