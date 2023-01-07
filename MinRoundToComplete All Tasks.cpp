class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int count=0;
        for (int i = 0; i < tasks.size(); i++)
            mp[tasks[i]]++;
        for(auto x: mp){
            if(x.second<=1) return -1;
            else if(x.second == 2){
                count++;
            }
            else {
                count+=ceil((double)x.second/3.0);
            }
        }
    return count;
    }
};