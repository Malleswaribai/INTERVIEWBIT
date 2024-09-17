/*
Problem Description
 
 

Given a singly linked list A, determine if it's a palindrome. Return 1 or 0, denoting if it's a palindrome or not, respectively.



Problem Constraints
 1 <= |A| <= 105 



Input Format
The first and the only argument of input contains a pointer to the head of the given linked list. 



Output Format
 Return 0, if the linked list is not a palindrome. 

 Return 1, if the linked list is a palindrome. 



Example Input
 Input 1: 

A = [1, 2, 2, 1]
Input 2:

A = [1, 3, 2]


Example Output
 Output 1: 

 1 
 Output 2: 

 0 
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* head) {
    // this problem is wont having constant space they mentioned in interviewbit hints
    
    auto cur=head;
    vector<int>v;
    while(cur){
        v.push_back(cur->val);
        cur=cur->next;
    }
    vector<int>copy=v;
    // return v.size();
    // if(v.size() == 0) return v.size();
    reverse(copy.begin(),copy.end());
    int i=0;
    while(i<v.size() && i<copy.size()){
        if(v[i]!=copy[i]){
            return 0;
        }
        i++;
    }
    return 1;
}
