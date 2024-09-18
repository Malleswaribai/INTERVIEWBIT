/*
Given a singly linked list

    L: L0 → L1 → … → Ln-1 → Ln,
reorder it to:

    L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
You must do this in-place without altering the nodes’ values.

For example,

Given {1,2,3,4}, reorder it to {1,4,2,3}.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* head) {
    //Approach-1 ->brute force taking time complexity of O(n) and space complexity of O(n).
    auto cur=head;
    if(cur==NULL) return NULL;
    vector<ListNode*>v;
    while(cur){
        v.push_back(cur);
        cur=cur->next;
    }
    vector<ListNode*>res;
    int n=v.size();
    int i=0,j=n-1;
    while(i<j){
        res.push_back(v[i]);
        res.push_back(v[j]);
        i++;
        j--;
    }
    if(i==j){
        res.push_back(v[i]);
    }
    for(int i=0; i<res.size(); i++){
        if(i==res.size()-1){
            res[i]->next=NULL;
        }
        else res[i]->next=res[i+1];
    }
    return res[0];
}
