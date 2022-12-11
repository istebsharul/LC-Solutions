class Solution {
public:
    
    int maxPathSum(TreeNode* root){
        int maxP = INT_MIN;
        maxPath(root,maxP);
        return maxP;
    }
    int maxPath(TreeNode*root, int &maxP){
        if(root==NULL) return 0;
        int lSum = max(0,maxPath(root->left,maxP));
        int rSum = max(0,maxPath(root->right,maxP));
        maxP = max(maxP,lSum+rSum+root->val);
        return root->val+max(lSum,rSum);
    }
};