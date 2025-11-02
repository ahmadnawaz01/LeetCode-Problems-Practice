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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)    //if empty return nulltptr
        {
            return head;
        }
        ListNode* removed = head;
        while (removed->next != nullptr) {    //tranverse to the end of list
            if (removed->val == removed->next->val) {   //check if next node is dublicate skip that
                removed->next = removed->next->next;
            } else {  //otherwise move to next one
                removed = removed->next;
            }
        }
        return head;
    }
};