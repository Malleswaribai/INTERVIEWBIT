/*
problem statement:
  Given a singly linked list and an integer K, reverses the nodes of the

list K at a time and returns modified linked list.

NOTE : The length of the list is divisible by K
Example :

Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2,

You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5

Try to solve the problem using constant extra space.

 */

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head, int k) {
    //->brute force , time complexity:O(2*N),space complexity: O(N)
    auto cur=head;
    vector<ListNode*>v;
    while(cur){
        v.push_back(cur);
        cur=cur->next;
    }
    vector<ListNode*>res;
    int n=v.size();
    int ct=0;
    vector<ListNode*>temp;
    for(int i=0; i<n; i++){
        temp.push_back(v[i]);
        ct++;
        if(ct == k) {
            reverse(temp.begin(),temp.end());
            for(int j=0; j<temp.size(); j++){
                res.push_back(temp[j]);
            }
            temp.clear();
            ct=0;
        }
    }
    for(int i=0; i<res.size(); i++){
        if(i == n-1) {
            res[i]->next = NULL;
            break;
        }
        res[i]->next = res[i+1];
    }
    return res[0];
}