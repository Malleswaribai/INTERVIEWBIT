/*
Problem Description

Given a linked list A of length N and an integer B.

You need to reverse every alternate B nodes in the linked list A.

Problem Constraints
1 <= N <= 105
1<= Value in Each Link List Node <= 103
1 <= B <= N
N is divisible by B
Input Format
First argument is the head pointer of the linkedlist A.

Second argument is an integer B.



Output Format
Return the head pointer of the final linkedlist as described.



Example Input
Input 1:

 A = 3 -> 4 -> 7 -> 5 -> 6 -> 6 -> 15 -> 61 -> 16
 B = 3
 Input 2:

 A = 1 -> 4 -> 6 -> 6 -> 4 -> 10
 B = 2


Example Output
Output 1:

 7 -> 4 -> 3 -> 5 -> 6 -> 6 -> 16 -> 61 -> 15
Output 2:

 4 -> 1 -> 6 -> 6 -> 10 -> 4

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* head, int k) {
    auto cur=head;
    vector<ListNode*>v;
    while(cur){
        v.push_back(cur);
        cur=cur->next;
    }
    vector<ListNode*>res;
    vector<ListNode*>temp;
    int n=v.size();
    int ct=0;
    bool flag=true;
    for(int i=0; i<n; i++){
        temp.push_back(v[i]);
        ct++;
        if(ct==k){
            if(flag==true){
                reverse(temp.begin(),temp.end());
            }
            
            for(int j=0; j<temp.size(); j++){
                res.push_back(temp[j]);
            }
            temp.clear();
            ct=0;
            
            flag^=true;
        }
    }
    if(flag) reverse(temp.begin(),temp.end());
    for(auto &x: temp) res.push_back(x);
    for(int i=0; i<res.size(); i++){
        if(i==res.size()-1){
            res[i]->next=NULL;
            break;
        }
        res[i]->next=res[i+1];
    }
    return res[0];
}
