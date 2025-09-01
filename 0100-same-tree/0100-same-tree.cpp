/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* p,TreeNode* q){
        if(q==NULL && p==NULL) return true;
        if((q==NULL && p!=NULL) || (q!=NULL && p==NULL)) return false;

        if(p->val!=q->val) return false;

        else if(!check(p->left,q->left)) return false;
        else if(!check(p->right,q->right)) return false;
        
        return true;
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p,q);
    }
};