class Solution {
public:
    TreeNode* build(vector<int>& pre,int preLow, int preHigh, vector<int>& in, int inLow, int inHigh){
        if(preLow > preHigh) return NULL;
        TreeNode* root = new TreeNode(pre[preLow]);
        if(preLow==preHigh) return root;
        int i = inLow;
        while(i<=inHigh){
            if(in[i]==pre[preLow]) break;
            i++;
        }
        int leftCount = i - inLow;
        int rightCount = inHigh - i;
        root->left = build(pre, preLow+1, preLow+leftCount, in, inLow, i-1);
        root->right = build(pre, preLow+leftCount+1, preHigh, in, i+1, inHigh);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        return build(pre, 0, n-1, in, 0, n-1);
    }
};