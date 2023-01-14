#include<bits/stdc++.h>
using namespace std;

char DFSMinChar(unordered_map<char,vector<char>> &ad,char curr_c, vector<int> &vis){
    vis[curr_c-'a']=1;
    char minChar=curr_c;
    for(char&x:ad[curr_c]){
        if(vis[x-'a']==0){
            minChar=min(minChar,DFSMinChar(ad,x,vis));
        }
    }
    return minChar;
}

string smallestEquivalentString(string s1, string s2, string baseStr) {
        unordered_map<char,vector<char>> ad;
        for(int i=0;i<s1.size();i++){
            ad[s1[i]].push_back(s2[i]);
            ad[s2[i]].push_back(s1[i]);
        }
        string ans;
        for(int i=0;i<baseStr.size();i++){
            char c=baseStr[i];
            vector<int> vis(26,0);
            char minChar= DFSMinChar(ad,c,vis);
            ans.push_back(minChar);
        }
        return ans;
}

int main(){
    string s1="parker";
    string s2="morris";
    string baseStr="parser";
    cout<<smallestEquivalentString(s1,s2,baseStr);
    return 0;
}