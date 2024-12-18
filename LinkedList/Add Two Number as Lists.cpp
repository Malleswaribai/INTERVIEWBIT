/*
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)

Output: 7 -> 0 -> 8

    342 + 465 = 807
Make sure there are no trailing zeros in the output list

So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* head1, ListNode* head2) {
    //it takes space and time complexity of O(n)
    if(head1==NULL && head2==NULL) return NULL;
    auto cur1=head1,cur2=head2;
    vector<int>v1;
    vector<int>v2;
    while(cur1){
        v1.push_back(cur1->val);
        cur1=cur1->next;
    }
    while(cur2){
        v2.push_back(cur2->val);
        cur2=cur2->next;
    }
    reverse(v1.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    vector<int>res;
    int n1=v1.size(), n2=v2.size(), i=n1-1, j=n2-1,carry=0;
    while(i>=0 && j>=0){
        int a=0,b=0;
        if(i>=0) a=v1[i];
        if(j>=0) b=v2[j];
        int x=a+b+carry;
        if(x>9){
            res.push_back(x%10);
            carry=1;
        }else{
            res.push_back(x);
            carry=0;
        }
        i--;
        j--;
    }
    if(carry==1) res.push_back(1);
    reverse(res.begin(),res.end());
    int k=res.size()-1;
    while(k>=0 && res[k]==0){
        res.pop_back();
        k--;
    }
    ListNode *head=NULL;
    ListNode *last=NULL;
    for(int i=0; i<res.size(); i++){
        ListNode *temp=new ListNode(res[i]);
        if(head==NULL){
            head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return head;
    // it takes O(n) timme complexity
    if(!head1 && !head2) return NULL;
    ListNode *Head=NULL;
    ListNode *last=NULL;
    auto cur1=head1, cur2=head2;
    int carry=0, value=0;
    while(cur1 || cur2 || carry){
        int sum=carry;
        if(cur1){
            sum+=cur1->val;
            cur1=cur1->next;
        }
        if(cur2){
            sum+=cur2->val;
            cur2=cur2->next;
        }
        ListNode *temp=new ListNode(sum%10);
        carry=sum/10;
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
