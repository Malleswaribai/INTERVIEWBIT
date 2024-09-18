/*
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

For example,

Given 1->2->3->3->4->4->5, return 1->2->5.

Given 1->1->1->2->3, return 2->3.

 */
 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* head) {
    if (!head || !head->next) {
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = head;
        ListNode* prev = dummy;
        
        while (cur && cur->next) {
            if (cur->val == cur->next->val) {
                int duplicateVal = cur->val;
                while (cur && cur->val == duplicateVal) {
                    ListNode* temp = cur;
                    cur = cur->next;
                    delete temp;
                }
                prev->next = cur;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }
        
        return dummy->next;
}