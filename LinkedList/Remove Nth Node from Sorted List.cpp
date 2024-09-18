/*
Given a linked list A, remove the B-th node from the end of the list and return its head.

For example, Given linked list: 1->2->3->4->5, and B = 2. After removing the second node from the end, the linked list becomes 1->2->3->5.

NOTE: If B is greater than the size of the list, remove the first node of the list.

NOTE: Try doing it using constant additional space.



Problem Constraints
 1 <= |A| <= 106 



Input Format
 The first argument of input contains a pointer to the head of the linked list. 

 The second argument of input contains the integer B. 



Output Format
 Return the head of the linked list after deleting the B-th element from the end. 



Example Input
 Input 1: 

A = [1, 2, 3, 4, 5]
B = 2
 Input 2: 

A = [1]
B = 1


Example Output
 Output 1: 

[1, 2, 3, 5]
 Output 2: 

 [] 
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
ListNode* Solution::removeNthFromEnd(ListNode* head, int k) {
    int n = 0;
    auto cur = head;
    while (cur) {
        n++;
        cur = cur->next;
    }

    int m = n - k;
    if (k > n || k == n) {
        ListNode* temp = head;
        head = head->next;
        delete temp; 
        return head;
    }
    auto cur1 = head;
    for (int i = 0; i < m - 1; i++) {
        cur1 = cur1->next;
    }
    ListNode* temp = cur1->next;
    cur1->next = cur1->next->next;
    delete temp;  
    
    return head;
}
