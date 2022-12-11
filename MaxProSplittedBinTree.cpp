class Solution {
public:
    long long int MOD=1e9+7;
    long long ans=0,fSum=0;
    int f(TreeNode*root){
        if(root==NULL) return 0;
        long long sum = f(root->left)+f(root->right)+root->val;
        ans=max(ans,(fSum-sum)*sum);
        return sum;
    }
    int maxProduct(TreeNode* root){
        fSum=f(root);
        f(root);
        return ans%MOD;
    }
};