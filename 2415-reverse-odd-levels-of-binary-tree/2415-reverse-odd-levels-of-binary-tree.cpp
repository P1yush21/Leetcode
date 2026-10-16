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
    void solve(TreeNode* left,TreeNode* right, int curr){
        if(left==NULL || right==NULL) return;
        if(curr%2!=0) swap(left->val, right->val);
        solve(left->left, right->right, curr+1);
        solve(left->right, right->left, curr+1);
    }
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        int n = level(root);
        if(n<=1) return root;
        solve(root->left, root->right, 1);
        return root;
    }
};