class Solution {
public:
    void preOrderTraversal(TreeNode* root,vector<TreeNode*>& ans){

        if(root==NULL) return ;
        ans.push_back(root);
        preOrderTraversal(root->left, ans);
        preOrderTraversal(root->right, ans);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans ;
        preOrderTraversal(root,ans);
        int n = ans.size();
        for(int i = 0; i < n-1; i++){
            ans[i]->left = NULL;
            ans[i]->right = ans[i+1];
        }
    }
};