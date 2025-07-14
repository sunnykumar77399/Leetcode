/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;

        if (root == NULL)   return res;
        q.push(root);

        while (!q.empty()) {
            vector<int> level;
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* Node = q.front();
                q.pop();
                if (Node->left != NULL) q.push(Node->left);
                if (Node->right != NULL) q.push(Node->right);
                level.push_back(Node->val);
            }
            res.push_back(level);
        }
        return res;
    }
};