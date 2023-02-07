#include<bits/stdc++.h>
using namespace std;

void convert(string s, int numRows) {
    // if(numRow=1) return s;
    string res="";
    for(int row=0;row<numRows;row++){
        int a=2*(numRows-1);
        for(int j=row;j<s.size();j=j+(2*(numRows-1))){
            res+=s[j];
            if(row>0 && row<numRows-1 && j+a-2*row<s.size()){
                res+=s[j+a-2*row];
            }
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    // return ans;
}

int main(){
    string s="PAYPALISHIRING";
    int numRows=3;
    convert(s,numRows);
}