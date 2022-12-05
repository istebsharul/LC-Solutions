#include<bits/stdc++.h>
using namespace std;

void find(vector<int> &v,vector<int> &a, int f){
    for(int i=0;i<v.size();i++){
        if(v[i]!=f){
            a.push_back(v[i]);
        }
    }
}

int main(){
    vector<int> v={1,2,3,4,3,5};
    vector<int> a;
    int f=3;
    find(v,a,f);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    for(auto i:a){
        cout<<i<<" ";
    }

    
    // return 0;
}