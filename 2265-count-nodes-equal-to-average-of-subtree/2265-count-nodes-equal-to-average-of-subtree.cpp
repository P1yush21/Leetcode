class Solution {
public:
    int getSize(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + getSize(root->left)+getSize(root->right);
    }
    int getSum(TreeNode* root){
        if(root==NULL) return 0;
        return root->val + getSum(root->left) + getSum(root->right);
    }
    int helper(TreeNode* root){
        if(root==NULL) return 0;
        int size = getSize(root);
        int sum = getSum(root);
        int avg = sum/size;
        int count = 0;
        if(root->val==avg) count++;
        count += helper(root->left);
        count += helper(root->right);
        return count;
    }
    int averageOfSubtree(TreeNode* root) {
        int count = helper(root);
        return count;
    }
};