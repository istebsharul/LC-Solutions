#include<bits/stdc++.h>
using namespace std;

// This will show TLE Error
// Optimized approach of O(n) is Below
int MinimumAverageDifference(vector<int>& nums){
        int n=nums.size();
        int arr[n];
        int a=0;
        int c=0;
        int l=0;
    
        for(int i=0;i<n;i++){
            a=a+nums[i];
            l=a/(i+1);
            int b=0;
            int m=0;
            for(int j=i+1;j<n;j++){
                b=b+nums[j];
                m=b/(j-i);
            }
            c=abs(l-m);
            arr[i]=c;
        }
       
        int &min= *min_element(arr, arr+n);
        for(int i=0;i<n;i++){
            if(min==arr[i]){
                return i;
            }
        }
        return 0;
}
// T.C -> O(n^2)

// This will be Accept
int minimumAverageDifference(vector<int>& nums){
        long long rSum=0;
        for(auto a:nums) rSum+=a;
        
        int min=INT_MAX;
        int ind=0;
        long long lSum=0;
        
        for(int i=0;i<nums.size();i++){
            lSum+=nums[i];
            rSum-=nums[i];
            
            long long a=lSum/(i+1);
            long long b= i<nums.size()-1 ? (rSum/(nums.size()-i-1)) : 0;
            
            int diff= abs(a-b);
            
            if(diff<min){
                min=diff;
                ind=i;
            }
        }
        return ind;
    }
// T.C ->O(n);

int main(){
    vector<int> nums={2,5,3,9,5,3};
    cout<<minimumAverageDifference(nums);

}


