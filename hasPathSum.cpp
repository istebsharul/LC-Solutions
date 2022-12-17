class Solution {
public:
    bool flag=false;
    void dfs(TreeNode* root,int targetSum,int sum){
        if(!root) {
            return;
        }
        sum+=root->val;
        if(!root->left && !root->right && targetSum==sum){
            flag=true;
            return;
        }
        dfs(root->left,targetSum,sum);
        dfs(root->right,targetSum,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum){
        dfs(root, targetSum,0);
        return flag;
    }
};