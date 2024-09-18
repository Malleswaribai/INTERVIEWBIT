/*
Sort a linked list using insertion sort.

We have explained Insertion Sort at Slide 7 of Arrays

Insertion Sort Wiki has some details on Insertion Sort as well.

Example :

Input : 1 -> 3 -> 2

Return 1 -> 2 -> 3

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* head) {
    auto cur=head;
    vector<int>v;
    while(cur){
        v.push_back(cur->val);
        cur=cur->next;
    }
    sort(v.begin(),v.end());
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
