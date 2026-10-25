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
    int solve(TreeNode* root, int& count){
        if(root==NULL) return 0;
        count++;
        solve(root->left, count);
        solve(root->right, count);
        return count;
    }
    int countNodes(TreeNode* root) {
        // if(root==NULL) return 0;
        // int count = 0;
        // // int counter = solve(root,count);
        // // return counter;
        // queue<TreeNode* > q;
        // q.push(root);
        // count++;
        // while(q.size()>0){
        //     TreeNode* temp = q.front();
        //     q.pop();
        //     if(temp->left!=NULL) {
        //         q.push(temp->left);
        //         count++;
        //     }
        //     if(temp->right!=NULL) {
        //         q.push(temp->right);
        //         count++;
        //     }
        // }
        // return count;

        if(root==NULL) return 0;
        int leftHeight = 0, rightHeight = 0;
        TreeNode* left = root, *right = root;
        while(left!=NULL){
            leftHeight++;
            left=left->left;
        }
        while(right!=NULL){
            rightHeight++;
            right=right->right;
        }
        if(leftHeight==rightHeight){
            return (1<<leftHeight)-1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};