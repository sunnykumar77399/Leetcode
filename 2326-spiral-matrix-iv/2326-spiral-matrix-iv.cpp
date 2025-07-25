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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         vector<vector<int>> res(m, vector<int>(n, -1));
         int top=0,btm=m-1;
         int left=0,right=n-1;

         ListNode * ptr=head;
         while(ptr!=NULL){
            for(int i=top;i<=right;i++){
                if(ptr!=NULL){
                     res[top][i]=ptr->val;
                    ptr=ptr->next;
                }else break;
               

            }
            top++;
            for(int i=top;i<=btm;i++){
                if(ptr!=NULL){
                     res[i][right]=ptr->val;
                    ptr=ptr->next;
                } else break;
            }
            right--;

             for(int i=right;i>=left;i--){
                if(ptr!=NULL){
                     res[btm][i]=ptr->val;
                    ptr=ptr->next;
                } else break;
            }
            btm--;
             for(int i=btm;i>=top;i--){
                if(ptr!=NULL){
                     res[i][left]=ptr->val;
                    ptr=ptr->next;
                }else break;
            }
            left++;
         }
         return res;
    }
};