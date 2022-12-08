class Solution {
public:
    void traverse(TreeNode* root, vector<int> &arr){
        while(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            arr.push_back(root->val);
            return;
        }
        traverse(root->left,arr);
        traverse(root->right,arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1;
        vector<int> arr2;
        traverse(root1, arr1);
        traverse(root2, arr2);
        if(arr1==arr2){
            return true;
        }
        else return false;
    }
};