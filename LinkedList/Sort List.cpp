/*
Sort a linked list in O(n log n) time using constant space complexity.

Example :

Input : 1 -> 5 -> 4 -> 3

Returned list : 1 -> 3 -> 4 -> 5
 */
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::sortList(ListNode* Head) {
    auto cur=Head;
    vector<int>v;
    while(cur){
        v.push_back(cur->val);
        cur=cur->next;
    }
    sort(v.begin(),v.end());
    ListNode *head=NULL;
    ListNode *last=NULL;
    for(int i=0; i<v.size(); i++){
        ListNode *temp=new ListNode(v[i]);
        if(head==NULL){
            head=temp;
            last= temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return head;
}
