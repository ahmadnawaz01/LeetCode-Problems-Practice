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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int countnodes=0;
        if(head==nullptr) //if head is empty
        {
            return nullptr;
        }
        ListNode *i=head; 
        while(i!=nullptr)   //this will count nodes
        {
            countnodes++;
            i=i->next;
        }
        int k=countnodes-n;  //this will find the position of nth node from the end of list
        ListNode* benode=head;
        if(k==0)   //if k=0 we just return the head->next node becuz we are removing the first node
        {
            return head->next;
        }
        while(k>1)   //this will give us the previous node of nth node
        {
            benode=benode->next;
            k--;
        }
        ListNode* temp=benode->next;
        benode->next=temp->next;
        return head;
    }
};