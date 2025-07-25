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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL || head==NULL) return head;
         ListNode * ptr=head;
         ListNode * ptr2=head->next;
         while(ptr2!=NULL){
            // int l=ptr->val;
            // int r=ptr2->val;
            int mini=min(ptr->val,ptr2->val);
            while(mini>0){
                if((ptr->val)%mini==0 && (ptr2->val)%mini==0){
                    ptr->next=new ListNode(mini);
                    ptr=ptr->next;
                    ptr->next=ptr2;
                    break;
                }else mini--;
            }
            ptr=ptr->next;
            ptr2=ptr2->next;
         }
         return head;
    }
};