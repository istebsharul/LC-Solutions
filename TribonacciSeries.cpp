#include<bits/stdc++.h>
using namespace std;

// int tri(int n){
//     if(n<0) return 0;
//     if(n>1) return tri(n-3)+tri(n-2)+tri(n-1);
//     return n;
// }

int fib(int n) {
    vector<int> memo(n + 1);
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 1;
    for (int i = 3; i <= n; i++) {
        memo[i] = memo[i-1] + memo[i-2]+ memo[i-3];
    }
    return memo[n];
}

int main(){
    int n;
    cin>>n;
    // cout<<tri(n);
    cout<<fib(n);
}