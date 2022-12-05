#include<bits/stdc++.h>
using namespace std;

void comSum(int i, int t, vector<int> &s,vector<int> &sum){
    // Base Case
    if(i==s.size()){
        if(t==0){
            for(auto a:sum) cout<<a<<" ";
            cout<<endl;
        }
        // cout<<endl;
        return;
    }
    if(s[i]<=t){
        sum.push_back(s[i]);
        comSum(i,t-s[i], s,sum);
        sum.pop_back();
    }
    
    comSum(i+1, t, s, sum);

}                                               

int main(){
    vector<int> s={2,7,11,15};
    vector<int> sum;
    int t= 9;
    comSum(0,t,s,sum);
    return 0;
}