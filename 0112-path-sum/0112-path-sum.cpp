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
    int helper(TreeNode* root, int targetSum, int sum){
        if(root==NULL) return 0;
        sum += root->val;
        if(root->left==NULL && root->right==NULL) {
            if(sum==targetSum) return 1;
            else return 0;
        }
        return helper(root->left, targetSum, sum) || helper(root->right, targetSum, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum, 0);
    }
};