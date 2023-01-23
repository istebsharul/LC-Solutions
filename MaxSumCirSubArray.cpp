class Solution {
public:
    int kadaneMax(vector<int> &nums){
        int sum=nums[0];
        int maxS=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=max(sum+nums[i], nums[i]);
            maxS=max(sum,maxS);
        }
        return maxS;
    }
     int kadaneMin(vector<int> &nums){
         int sum=nums[0];
         int minS=nums[0];
         for(int i=1;i<nums.size();i++){
             sum=min(sum+nums[i], nums[i]);
             minS=min(sum,minS);
         }
         return minS;
     }

    int maxSubarraySumCircular(vector<int>& nums) {
         int sum= accumulate(begin(nums),end(nums),0); 
         int minSum = kadaneMin(nums);
         int maxSum = kadaneMax(nums);
         int cirSum = sum - minSum;
         if(maxSum>0) return max(cirSum,maxSum);
         return maxSum;
    }
};