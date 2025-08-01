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
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        int t2=depth(root->left);//2
        int t1=depth(root->right);
        return 1+max(t1,t2);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return depth(root);
    }
};