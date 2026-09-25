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
    bool solve(TreeNode* root){
        if(root == NULL) return true;
        int left = root->left->val;
        int right = root->right->val;
        if(root->val != left+right) return false;
        return (root->left && root->right);
    }
    bool checkTree(TreeNode* root) {
        return solve(root);
    }
};