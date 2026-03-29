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
     struct compare {   //we make custom compare for minheap beacuse priority queue is default max hea[]
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;  //return true if a > b means a is gerator than b make it lower in heap
        }
    };
   
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode *,vector<ListNode*>,compare> pq;    //makes a minheap with (data type , container which is vector, compartor that tells smaller  value on top)

        for(int i=0;i<lists.size();i++)  //this loops
        {
            if(lists[i]!=nullptr)  //pushes each head nodes of lists in minheap
            {
                pq.push(lists[i]);
            }
        }
        ListNode *dum=new ListNode(0);
        ListNode *tail=dum;    //make a dumpy node 
        while(!pq.empty())  //till minheap is  not empty
        {
            ListNode* node=pq.top();  //gives the smallest node in minheap
            pq.pop();
            tail->next=node;  //attach to dumpy list
            tail=tail->next;
            if(node->next!=nullptr)  //checkk if the pop node next is avaible push to minheap
            {
                pq.push(node->next);
            }
        }
        return dum->next;  //returns the dumpy list
        
    }
};