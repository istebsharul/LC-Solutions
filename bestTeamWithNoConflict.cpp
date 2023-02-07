#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int bestTeamScore(vector<int>& scores, vector<int>& ages) {

   vector<pair<int,int>> p;
   for(int i=0;i<scores.size();i++){
       p.push_back(make_pair(ages[i],scores[i]));
   } 
   sort(p.begin(),p.end());

   int n = p.size();
   vector<int> dp(n, 0);

   int ans = 0;
   for (int i = 0; i < n; i++) {
       dp[i] = p[i].second;
       for (int j = 0; j < i; j++) {
           if (p[j].second <= p[i].second) {
               dp[i] = max(dp[i], dp[j] + p[i].second);
           }
       }
       ans = max(ans, dp[i]);
   }
   return ans;
    }
};

int main() {
    Solution sol;
    vector<int> scores = {1, 3, 5, 10, 15};
    vector<int> ages = {1, 2, 3, 4, 5};
    int result = sol.bestTeamScore(scores, ages);
    cout << "Result: " << result << endl;
    return 0;
}