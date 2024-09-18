/*
Problem Description

Given a Linked List A consisting of N nodes.

The Linked List is binary i.e data values in the linked list nodes consist of only 0's and 1's.

You need to sort the linked list and return the new linked list.

NOTE:

Try to do it in constant space.


Problem Constraints
 1 <= N <= 105

 A.val = 0 or A.val = 1



Input Format
First and only argument is the head pointer of the linkedlist A.



Output Format
Return the head pointer of the new sorted linked list.



Example Input
Input 1:

 1 -> 0 -> 0 -> 1
Input 2:

 0 -> 0 -> 1 -> 1 -> 0


Example Output
Output 1:

 0 -> 0 -> 1 -> 1
Output 2:

 0 -> 0 -> 0 -> 1 -> 1
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* head) {
    auto cur=head;
    int ZeroCt=0;
    int OneCt=0;
    while(cur){
        if(cur->val==0){
            ZeroCt++;
        }else{
            OneCt++;
        }
        cur=cur->next;
    }
    cur=head;
    while(cur){
        if(ZeroCt) {
            cur->val=0;
            ZeroCt--;
        }else{
            cur->val=1;
            OneCt--;
        }
        cur=cur->next;
    }
    return head;
}
