class Solution {
public:
    int helper(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(helper(root->left),helper(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lt = helper(root->left);
        int rt = helper(root->right);
        if(abs(lt-rt)>1) return false;
        if (!isBalanced(root->left))return false;
        if (!isBalanced(root->right))return false;
        return true;
    }
};