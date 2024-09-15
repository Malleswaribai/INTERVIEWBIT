
/*
Problem Description:

Given a linked list A , reverse the order of all nodes at even positions.
1 <= Size of linked list <= 100000
Example Input
Input 1:

A = 1 -> 2 -> 3 -> 4
Input 2:

A = 1 -> 2 -> 3


Example Output
Output 1:

 1 -> 4 -> 3 -> 2
Output 2:

 1 -> 2 -> 3
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
    vector<int>v;
    while(cur){
       v.push_back(cur->val);
       cur=cur->next;
    }
    int n=v.size();
    int FirstEvenPositionElementIndex=1;
    int LastEvenPositionElementIndex;
    if(n%2==0){
        LastEvenPositionElementIndex=n-1;
    }else{
        LastEvenPositionElementIndex=n-2;
    }
    while(FirstEvenPositionElementIndex < LastEvenPositionElementIndex){
        swap(v[FirstEvenPositionElementIndex],v[LastEvenPositionElementIndex]);
        FirstEvenPositionElementIndex+=2;
        LastEvenPositionElementIndex-=2;
    }
    ListNode  *last=NULL;
    head=NULL;
    for(int i=0; i<n; i++){
        ListNode *temp=new ListNode(v[i]);
        if(head==NULL){
            head=temp;
            last=temp;
        }else{
            last->next=temp;
            last=temp;
        }
    }
    return head;
}

