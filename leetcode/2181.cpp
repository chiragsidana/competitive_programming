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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* chirag=new ListNode;
        int sidana;
        bool babla=0;
        ListNode*hale;
        ListNode*parth=NULL;
        while(head!=NULL){
            sidana=0;
            while(head!=NULL and head->val!=0){
                sidana=sidana+head->val;
                head=head->next;
            }
            if(sidana){
                chirag->val=sidana;
                if(!babla){
                    babla=1;
                    hale=chirag;
                }
                if(hale!=NULL){
                    parth=chirag;
                    ListNode*tera2=new ListNode;
                    chirag->next=tera2;
                    chirag=tera2;
                }
            }
            head=head->next;
        }
        if(chirag->val==0){
            if(parth!=NULL){
                parth->next=NULL;
                delete chirag;
            }
        }
        return hale;
        
    }
};
