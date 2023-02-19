#include<bits/stdc++.h>
using namespace std;

void addToArrayForm(vector<int>& num, int k) {
        vector<int> b;
        while(k>0){
            int d= k%10;
            b.push_back(d);
            k/=10;
        }
        b.resize(num.size());
        vector<int> ans;
        for(auto x: b) cout<<x<<" ";
        cout<<endl;
        
        
        
        for(auto x: ans) cout<<x<<" ";
    }

int main(){
    vector<int> num={1,2,0,0};
    int k=34;
    // for(int i=0;i<4;i++){
    //     int c =  a%10;
    //     b.push_back(c);
    // }
    addToArrayForm(num,k);
    
    // for(auto x: b) cout<<x<<" ";
    
}