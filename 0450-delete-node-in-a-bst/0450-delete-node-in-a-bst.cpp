class Solution {
public:
    TreeNode* inorderPred(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right!=NULL) pred=pred->right;
        return pred;
    }
    TreeNode* inorderSucc(TreeNode* root){
        TreeNode* succ = root->right;
        while(succ->left!=NULL) succ=succ->left;
        return succ;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key) {
            // Case 1: No Child
            if(root->left==NULL && root->right==NULL) {
                return NULL;
            } 

            // Case 2: 1 Child
            if(root->left==NULL || root->right==NULL){
                if(root->left==NULL) return root->right;
                else return root->left;
            }

            if(root->left!=NULL || root->right!=NULL){
                // replace the root with inorder pred/succ
                TreeNode* pred = inorderPred(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        }
        
        else if(root->val > key) {
            root->left = deleteNode(root->left, key);
        }
        else {
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};