#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

// void subSeq(char i,vector<int> &seq,vector<int> &sseq){ 
//         if(i==seq.size()){
//             // for(auto x:sseq) cout<<x<<" ";
//             // cout<<endl;
//             ans.push_back(sseq);
//             return;
//         }
//         sseq.push_back(seq[i]);
//         subSeq(i+1,seq, sseq);

//         sseq.pop_back();
//         subSeq(i+1, seq, sseq);

//     }

void findSubsequences(vector<int>& nums) {
        vector<int> seq; 
        vector<vector<int>> sseq; 
        seq.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=nums[i-1] && nums[i]>=seq[i-1]){
                seq.push_back(nums[i]);
            }
        }
        for(auto x:seq){
            cout<<x<<" ";
        }
        for(int i=0;i<seq.size();i++){
            for(int j=1;j<seq.size();j++){

            }
        }
}

int main(){
    vector<int> nums={4,6,7,7};
    findSubsequences(nums);
}