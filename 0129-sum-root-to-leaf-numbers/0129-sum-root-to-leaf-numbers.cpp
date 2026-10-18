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
    void solve(TreeNode* root, string str, vector<string>& v){
        if(root==NULL) return ;
        str += to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            v.push_back(str);
            return;
        }
        solve(root->left, str, v);
        solve(root->right, str, v);
    }
    int sumNumbers(TreeNode* root) {
        string str = "";
        vector<string> v;
        solve(root, str, v);
        int sum = 0;
        for(int i = 0; i < v.size(); i++){
            sum += stoi(v[i]);
        }
        return sum;
    }
};