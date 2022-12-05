#include<bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int> &arr,int t){
//     int n= arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1; j<n;j++){
//             if(arr[i]+arr[j]==t){
//                 return {i,j};
//                 // cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
//     return {-1,-1};
// }


// Brute Force Solution
class Solution {
        
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
// T.C => O(n^2);
// S.C => O(1);


// Using Hashmap
class Solution {
        
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> m;
        for(int i=0; i<nums.size();i++){
            int x=nums[i];
            int y=target-x;
            if(m.find(y)!=m.end()){
                return {1,m[y]};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};
// T.C => O(n);
// S.C => O(n);


//Using Pair and Sorting
class Solution {
        
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size();i++)v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int s=0,e=nums.size()-1;
        while(s<e){
            if(v[s].first+v[e].first==target){
                return {v[s].second, v[e].second};
            }
            else if(v[s].first+v[e].first>target)e--;
            else s++;
        }
        return {-1,-1};
    }
};
// T.C => O(nlogn)
// S.C => O(n)



// int main(){
//     vector<int> arr={1,2,4,2};
//     int t=9;
//     twoSum(arr,t);
// }