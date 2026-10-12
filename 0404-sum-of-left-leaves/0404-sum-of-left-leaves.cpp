
class Solution {
public:
    int solve(TreeNode* root, bool isLeft) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL) {
            return isLeft ? root->val : 0;
        }
        return solve(root->left, true) + solve(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) { 
        return solve(root, false); 
    }
};
