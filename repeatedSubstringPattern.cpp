#include<bits/stdc++.h>
using namespace std;

bool subS(string s){
    return (s+s).find(s,1)<s.size();
}

int main(){
    string s="ababab";
    cout<<subS(s);
}