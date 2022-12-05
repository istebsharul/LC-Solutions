#include<bits/stdc++.h>
using namespace std;

bool isVowel(char s){
    if(s=='a'|| s=='e' || s=='i' || s=='o' || s=='u' ||s=='A' || s=='E' || s=='I' || s=='O'|| s=='U')
    {
        return true;
    }
    else return false;
}


bool halvesAreAlike(string s){
    int i=0;
    int j=s.size()-1;
    int m=0;
    int n=0;
    
    while(i<j){
        if(isVowel(s[i])){
            // cout<<i<<" It is vowel"<<endl;
            m++;
            // return true;
        }
        if(isVowel(s[j])){
            //  cout<<j<<" It is a vowel"<<endl;
             n++;
        }
        i++;
        j--;
        // cout<<i<<j<<endl;
        // cout<<m<<n<<endl;
    }
    if(m==n){
        return true;
    }
    else return false;
}

int main(){
    string s="friend";
    cout<<halvesAreAlike(s);
}