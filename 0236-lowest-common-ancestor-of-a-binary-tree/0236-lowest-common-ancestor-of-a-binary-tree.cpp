// class Solution {
// public:
//     bool existsInTree(TreeNode* root, TreeNode* target){
//         if(root==NULL) return false;
//         if(root==target) return true;
//         return existsInTree(root->left, target) || existsInTree(root->right,
//         target);
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//     {
//         // if(root==p || root==q) return root;
//         // else if(existsInTree(root->left, p) && existsInTree(root->right,
//         q)) return root;
//         // else if(existsInTree(root->right, p) && existsInTree(root->left,
//         q)) return root;
//         // else if(existsInTree(root->left, p) && existsInTree(root->left,
//         q)) return lowestCommonAncestor(root->left,p,q);
//         // else return lowestCommonAncestor(root->right,p,q);

//         if(existsInTree(root->left, p) && existsInTree(root->left, q)) return
//         lowestCommonAncestor(root->left,p,q); else
//         if(existsInTree(root->right, p) && existsInTree(root->right, q))
//         return lowestCommonAncestor(root->right,p,q); return root;
//     }
// };

class Solution {
public:
    bool findPath(TreeNode* root, TreeNode* target, vector<TreeNode*>& path) {

        if (root == NULL)
            return false;

        path.push_back(root);

        if (root == target)
            return true;

        if (findPath(root->left, target, path) ||
            findPath(root->right, target, path))
            return true;

        path.pop_back();

        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        vector<TreeNode*> pathP;
        vector<TreeNode*> pathQ;

        findPath(root, p, pathP);
        findPath(root, q, pathQ);

        int i = 0;

        while (i < pathP.size() && i < pathQ.size() && pathP[i] == pathQ[i]) {
            i++;
        }

        return pathP[i - 1];
    }
};