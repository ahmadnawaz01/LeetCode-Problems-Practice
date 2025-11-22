/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr)
            return head;        //return if list is empty
        ListNode* dummy = new ListNode(0);   //make a dummy
        dummy->next = head;  
        ListNode* curr = dummy;  //point curr to dummy
            while (curr->next && curr->next->next) {
            ListNode* a = curr->next;        //mkae two nodes that point current next 2 nodes and swap them and make current to next pair first node
            ListNode* b = curr->next->next;

            a->next = b->next;
            b->next = a;
            curr->next = b;

            curr = a;
        }
        return dummy->next;   //return now dummy->next
    }
};