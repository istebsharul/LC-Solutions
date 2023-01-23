#include<bits/stdc++.h>
using namespace std;

// int findJudge(int n, vector<vector<int>>& trust) {
//     if(n==1) return 1;
//     unordered_map<int,int> mp;
//     for(int i=0;i<trust.size();i++){
//         mp[trust[i][1]]++;
//     }
//     int ch=0;
//     for(auto x: mp) {
//         if(x.second==n-1){
//             ch=x.first;
//         }
//     }
//     for(int i=0;i<trust.size();i++){
//         if(trust[i][0]==ch) return -1;
//         }
//     if(ch>0) return ch;
//     else return -1;
// }

int findJudge(int n, vector<vector<int>>& trust) {
    vector<int> arr(n+1,0);
    for(auto x:arr) cout<<x<<" ";
    for(int i=0;i<trust.size();i++){
        arr[trust[i][0]]=-1;
        if(arr[trust[i][1]]!=-1){
            arr[trust[i][1]]++;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        if(arr[i]==n-1) return i;
    }
    return -1;
}

int main(){
    int n=3;
    vector<vector<int>> trust={{1,3},{2,3}};
    cout<<findJudge(n,trust);

}