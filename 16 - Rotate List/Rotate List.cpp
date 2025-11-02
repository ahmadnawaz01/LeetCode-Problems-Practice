class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) {  //list is empty
            return head;
        }

        int size = count(head); //call count fucntion to count nodes
        k = k % size;   //take modulus if value is large than size
        if (k == 0) {     //rototes equal to size the original linked list become no need to rotate
            return head;
        }

        int tailnode = size - k;  
        ListNode* newtail = head;
        for (int i = 0; i < tailnode - 1; i++) {  //tranverse to the new tail 
            newtail = newtail->next;
        }

        ListNode* newhead = newtail->next;  //new head will the newtail -> next
        newtail->next = nullptr;  //point the newtail to nullptr if not i will beccome circular list

        ListNode* tailfind = lastnode(newhead);  //now get the last node and point it to head
        tailfind->next = head;

        return newhead;  //just return new head now
    }

    int count(ListNode* head) {
        int c = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            c++;
            temp = temp->next;
        }
        return c;
    }

    ListNode* lastnode(ListNode* n) {
        ListNode* temp = n;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        return temp;
    }
};
