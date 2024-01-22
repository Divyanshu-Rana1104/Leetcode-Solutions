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
        if(list1==NULL ){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
       ListNode *a=list1;
        ListNode *b=list2;
             ListNode *tail=NULL;
                 ListNode *head=NULL;
        if(a->val >= b->val){
            head=b;
            tail=b;
            b=b->next;
        }
            else{
                head=a,
                tail=a;
                a=a->next;
            }
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                tail->next=a;
                tail=a;
                a=a->next;
            }
            else{
                tail->next=b;
                tail=b;
                b=b->next;
            }
        }
            if(a==NULL){
                tail->next=b;
            }
            else{
                tail->next=a;
            }
           
        
         return head;
    }
    
};