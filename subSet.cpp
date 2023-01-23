#include<bits/stdc++.h>
using namespace std;

set<vector<int>> ans;
void subSeq(int i,vector<int> nums, vector<int> sseq){
        if(sseq.size()>1){
            ans.insert(sseq);
            return;
        }
        sseq.push_back(nums[i]);
        subSeq(i+1,nums,sseq);
        sseq.pop_back();
        // subSeq(i+1,nums,sseq,ans);
    }
void subsets(vector<int>& nums){
        vector<int> sseq;
        subSeq(0,nums,sseq);
        // return ans;
}

int main(){
    vector<int> nums={4,6,7,7};
    // set<vector<int>> ans;
    subsets(nums);
}