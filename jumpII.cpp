#include<bits/stdc++.h>
using namespace std;

int jump(vector<int> & nums){
    int maxR=0,currR=0,j=0;
    for(int i=0;i<nums.size()-1;i++){
        maxR=max(i+nums[i],maxR);
        if(i==currR){
            j++;
            currR=maxR;
        }
    }
    return j;
}


int main(){
    vector<int> nums={2,3,1,1,4};
    cout<<jump(nums);
}