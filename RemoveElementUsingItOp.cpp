#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        for(auto it=nums.begin();it!=nums.end();it++){
            if(*it==val){
                nums.erase(it);
            }
        }
        return nums.size();
}

int main(){
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val=3;
    cout<<removeElement(nums, val);
    return 0;
}