public: 
    void comSum(int i, int t, vector<int> &nums, vector<vector<int>> &sum, vector<int> &ds){
        if(i==nums.size()){
            if(t==0){
              sum.push_back(ds);
            }
            return;
        }
        if(nums[i]<=t){
            ds.push_back(nums[i]);
            comSum(i,t-nums[i],nums,sum,ds);
            ds.pop_back();
        }
        comSum(i+1,t,nums,sum,ds);
    }
    

public:
    vector<vector<int>> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> sum;
        vector<int> ds;
        comSum(0,target,nums,sum,ds);
        return sum;
    }
};