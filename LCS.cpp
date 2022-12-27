#include<bits/stdc++.h>
using namespace std;

vector<int> printIntersection(vector<vector<int>>& nums){
        vector<int> ans;
        set<int> s;
        s.insert(nums[0][0]);
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(s.count(nums[i][j]))
                {
                    ans.push_back(nums[i][j]);
                }
            }
        }
        for(int )
        return ans;
}

int main(){
    vector<vector<int>> nums{{1,2,3},{4,5,6}};
    // cout<<nums[3].size();
    cout<<printIntersection(nums);
    

    return 0;
}