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
    void reorderList(ListNode* head) {
        if(!head)return;
        
        //middle dhoondo pehle
        ListNode *temp=head,*half=head;
        while(temp->next and temp->next->next){
            temp=temp->next->next;
            half=half->next;
        }
        //half hai vo middle nhi hai vo apni 2nd list ka head hai jise hmne reverse krna hai
        if(temp->next)half=half->next; // agar lsit even hui to
        
        // reverse krna hai 2nd list ko
        ListNode *prev=NULL;
        while(half){
            temp=half->next;
            half->next=prev;
            prev=half;
            half=temp;
        }
        half=prev;
        // ab 2 lsit hai ek ka head hai starting ek ka hai half
        while(head and half){
            temp=head->next;
            prev=half->next;
            head->next=half;
            half->next=temp;
            head=temp;
            half=prev;
        }
        if(head and head->next)head->next->next=NULL;
    }
};
