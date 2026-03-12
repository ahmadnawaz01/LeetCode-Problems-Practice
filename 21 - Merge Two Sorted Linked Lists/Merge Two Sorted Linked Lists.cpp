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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head= new ListNode();          //make a new empty list head to make merge 
        ListNode* temp=head;                      //that stores the head of that empty list 
        while(list1!=nullptr && list2!=nullptr)          //runs till the either one of the   link list is become null
        {
            if(list1->val<=list2->val)     //check if the first list1 value is lesser than merge to new empty list 
            {
                head->next=list1;
                head=head->next;
                list1=list1->next;
            }
            else  //else list2 node to merge empty list we make 
            {
                head->next=list2;
                head=head->next;
                list2=list2->next;
            }
        }
        //when one of list is null and we just have to merge the other list to the merged list
        if(list1==nullptr)
        {
            head->next=list2;
        }
        if(list2==nullptr)
        {
            head->next=list1;
        }
        return temp->next;   //in the end just reutrn the node head 
    }
};
