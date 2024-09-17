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
ListNode* Solution::rotateRight(ListNode* head, int k) {
    auto cur=head;
    vector<ListNode*>v;
    while(cur){
        v.push_back(cur);
        cur=cur->next;
    }
    int n=v.size();
    vector<ListNode*>res;
    int i=n-1;
    k=k%n;  // here it will give how many times it should rotate the list
    while(k>0){
        res.push_back(v[i]);
        i--;
        k--;
    }
    reverse(res.begin(),res.end());
    int m=n-k;
    for(int j=0; j<m; j++){
        res.push_back(v[j]);
    }
    for(int i=0; i<res.size(); i++){
        if(i==n-1){
            res[i]->next=NULL;
            break;
        }
        res[i]->next=res[i+1];
    }
    return res[0];
}
