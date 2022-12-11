class Solution {
public:
    int maxDiff(TreeNode* root,int maxNum,int minNum){
        if(root==NULL){
            return maxNum-minNum;
        }
        maxNum = max(maxNum,root->val);
        minNum = min(minNum,root->val);
        return max(maxDiff(root->left,maxNum,minNum),maxDiff(root->right,maxNum,minNum));
        }
    int maxAncestorDiff(TreeNode* root) {
        int maxNum=0;
        int minNum=100000;
        return maxDiff(root,maxNum,minNum);
    }
};