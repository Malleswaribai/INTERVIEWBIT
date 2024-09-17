/*
Merge two sorted linked lists and return it as a new list. 

The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

For example, given following linked lists :

  5 -> 8 -> 20 
  4 -> 11 -> 15
The merged list should be :

4 -> 5 -> 8 -> 11 -> 15 -> 20
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* head1, ListNode* head2) {
    //Approach-1-> here i used sort funtion to sort merged list and it is taking time complexity of O(nlog(n)) and space complexity of O(n).
    auto cur1=head1;
    auto cur2=head2;
    vector<int>res;
    while(cur1){
        res.push_back(cur1->val);
        cur1=cur1->next;
    }
    while(cur2){
        res.push_back(cur2->val);
        cur2=cur2->next;
    }
    sort(res.begin(),res.end());
    int n=res.size();
    ListNode *head=NULL;
    ListNode *last=NULL;
    for(int i=0; i<n; i++){
        ListNode *temp= new ListNode(res[i]);
        if(head==NULL){
            head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return head;
    // Approach-2 -> here i did not use any sort function and the time complexity is O(n) and space complexity is O(n).
    auto cur1=head1;
    auto cur2=head2;
    vector<int>res;
    while(cur1 && cur2){
        if(cur1->val<cur2->val){
            res.push_back(cur1->val);
            cur1=cur1->next;
        }else{
            res.push_back(cur2->val);
            cur2=cur2->next;
        }
    }
    if(cur1){
       while(cur1){
           res.push_back(cur1->val);
           cur1=cur1->next;
       }
    }
    if(cur2){
       while(cur2){
           res.push_back(cur2->val);
           cur2=cur2->next;
       }
    }
    int n=res.size();
    ListNode *head=NULL;
    ListNode *last=NULL;
    for(int i=0; i<n; i++){
        ListNode *temp= new ListNode(res[i]);
        if(head==NULL){
            head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return head;

    // Approach-3 -> here i did not use any sort function and even i did not use space complexity so the time complexity is O(n).
    ListNode *head = NULL , *last = NULL; 
    while(head1 || head2) {
        int x = INT_MAX , y = INT_MAX ;
        if(head1) x = head1->val;
        if(head2) y = head2->val;
        ListNode *cur; 
        if(x<y) {
            cur = head1;
            head1 = head1->next;
        } else {
             cur = head2;
             head2 = head2->next;
        }
        
        if(head == NULL) {
            head = cur;
            last = cur;
        } else {
            last->next = cur;
            last = cur;
        }
    }
    return head;
}
