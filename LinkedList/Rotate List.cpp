/*
Problem Description
 
 

Given a list, rotate the list to the right by k places, where k is non-negative.


Problem Constraints
1 <= B <= 109


Input Format
The first argument is ListNode A, pointing to the head of the list.
The second argument is an integer B, representing the value of k.


Output Format
Return the rotated list.


Example Input
A = 1->2->3->4->5->NULL
B = 2


Example Output
4->5->1->2->3->NULL

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
ListNode* Solution::rotateRight(ListNode* head, int B) {
    //approach-1: it is giving memory limit exceeded error because of used of space
    if(head==NULL) return NULL;
    auto cur=head;
    vector<int>v;
    while(cur){
        v.push_back(cur->val);
        cur=cur->next;
    }
    vector<int>rotated;
    int n=v.size();
    if(B>n){
        rotated.push_back(v[n-1]);
         int i=0;
        while(i<n-1){
            rotated.push_back(v[n-1]);
        }
    }else{
            int ind=n-B;
        int i=ind;
        while(i<n){
            rotated.push_back(v[i]);
            i++;
        }
        i=0;
        while(i<ind){
            rotated.push_back(v[i]);
            i++;
        }
    }  
    ListNode *Head=NULL;
    ListNode *last=NULL;
    for(int i=0; i<rotated.size(); i++){
        ListNode *temp= new ListNode(rotated[i]);
        if(Head==NULL){
            Head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return Head;
    //
    if(head==NULL) return NULL;
    int n=0;
    auto cur=head;
    while(cur){
        n++;
        cur=cur->next;
    }
    B=B%n;
    if(B==0) return head;
    int rotatedIndex=n-B;
    int ct=0;
    cur=head;
    while(cur){
        ct++;
        if(ct==rotatedIndex){
            break;
        }
        cur=cur->next;
    }
    ListNode *newHead=cur->next;
    cur->next=NULL;
    auto Cur=newHead;
    while(Cur->next){
        Cur=Cur->next;
    }
    Cur->next=head;
    return newHead;
    
}
