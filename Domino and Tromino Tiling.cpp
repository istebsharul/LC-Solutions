#include<bits/stdc++.h>
using namespace std;

long m=1e9+7;
int numTilings(int n) {
    vector<int> dp(1001, -1);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=(2*dp[i-1]%m+dp[i-3]%m)%m;
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<numTilings(n);
    // cout<<f(arr,n);
}