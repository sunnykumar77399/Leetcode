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
    vector<int> res;
    int height=0;
    void func(TreeNode* root,int depth){
        if(!root) return ;
        depth++;
        if(depth>height) {
            res.push_back(root->val);
            height++;
        }
        func(root->right,depth);
        func(root->left,depth);

    }
    vector<int> rightSideView(TreeNode* root) {
        func(root,0);
        return res;
    }
};