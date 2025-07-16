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
    stack<int> st;
    void solve(TreeNode * root){
        if(root==NULL) return;
        // st.push(root->val);
        // return ;
        res.push_back(st.top());
        st.pop();
        if(root->right!=NULL)
        st.push(root->right->val);
        if(root->left!=NULL)
        st.push(root->left->val);

        solve(root->left);
        solve(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(root!=NULL) st.push(root->val);
        solve(root); 
        return res;
    }
};