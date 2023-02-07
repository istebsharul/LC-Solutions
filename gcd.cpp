#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={7,5,6,8,3};
    // int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        cout<<gcd(nums[0],nums[nums.size()+1]);
    // }
}