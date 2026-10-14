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
    // void inOrder(vector<int>& ans, TreeNode* root){
    //     if(root==NULL) return;
    //     inOrder(ans, root->left);
    //     ans.push_back(root->val);
    //     inOrder(ans, root->right);
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        // inOrder(ans, root);
        stack<TreeNode*>st;
        TreeNode* node = root;
        while(st.size()>0 || node!=NULL){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                
                TreeNode* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                node = temp->right;
            }
        }
        return ans;
    }
};

























