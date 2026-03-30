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
    ListNode* kthnode(ListNode* t,int k)  //this is helper fucntion to get the kthn node
    {
        while(t!=nullptr && k>0)  //if length is less than k return nullptr else the kth node
        {
            t=t->next;
            k--;
        }
        return t;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dum=new ListNode(0,head);  //dumpy head 0 pointer to original head
        ListNode* groupprev=dum;  //previous of first group is dumpy

        while(true)  
        {
            ListNode* kthn=kthnode(groupprev,k); //get the ktnth node
            if(kthn==nullptr)  //if not i range return nullptr
            {
                break;
            }

            ListNode* groupnext=kthn->next;  //group next is first group knth next

            ListNode*prev=groupnext;   //which i becom eprev when reversed
            ListNode*curr=groupprev->next;   //point curr to grp previous which is dumpy-> next  
            while(curr!=groupnext)  
            {
                ListNode*temp=curr->next;  //save the first next pointer
                curr->next= prev;  //point the curr to prev which is group next
                prev=curr;  //now prev is curr
                curr=temp;  //curr is now the next node
            }
            ListNode*temp=groupprev->next;  //group prev point to the next group first node
            groupprev->next=kthn;  //which is knth pbecome prev
            groupprev=temp;  //point to fist node which is tail now and become prev of next group
        }
        return dum->next;  //just return the dum->next
    }
};