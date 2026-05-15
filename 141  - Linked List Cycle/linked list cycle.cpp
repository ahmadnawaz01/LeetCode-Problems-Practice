/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr)  //if head is nullptr return fasle
        {
            return false;
        }
        ListNode * slow=head;  //initialize slow pointer with head 
        ListNode *fast=head;  //and the fast pointer  with head
        while(fast!=nullptr && fast->next!=nullptr)  //run till fast or fast->next is equal to nullptr
        {
            slow=slow->next;  //move one step
            fast=fast->next->next; //move two step
            if(slow==fast)  //if fast rotate to match the slow
            {
                return true; //loop exists
            }
        }
        return false; //not exist
    }
};