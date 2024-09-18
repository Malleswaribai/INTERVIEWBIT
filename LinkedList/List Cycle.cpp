/*
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

Try solving it using constant additional space.

Example:

Input: 


              ______
             |     |
             \/    |
    1 -> 2 -> 3 -> 4


Return the node corresponding to node 3. 

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    map<ListNode*,int>mp;
    ListNode* temp=A;
    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()){
            return temp;
        }
        mp[temp]=1;
        temp=temp->next;
    }
    return NULL;
}