#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int>& nums) {
        set<int> a;
        for(int i=1;i<nums.size();i++){
            a.insert(nums[i]);
        }
        for(auto x:a) cout<<x<<" ";
    }

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(nums);
}