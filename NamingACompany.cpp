#include<bits/stdc++.h>
using namespace std;

long long distinctNames(vector<string>& ideas) {
        long long count=0;
        if(ideas.size()==1) return 0;
        for(int i=0;i<ideas.size();i++){
            string a=ideas[i];
            for(int j=0;j<ideas.size();j++){
                string b=ideas[j];
                if(a==b) continue;
                swap(a[0],b[0]);
                if(find(ideas.begin(), ideas.end(), a)== ideas.end() && find(ideas.begin(), ideas.end(), b) == ideas.end()){
                    count++;
                    // cout<<"counted: "<<a<<" "<<b<<endl;
                }
                swap(a[0],b[0]);
            }
        }
        return count;
    }

long long distinctNames(vector<int> & ideas){
    unordered_map
}


int main(){
    vector<string> ideas={"coffee","donuts","time","toffee"};
    cout<<distinctNames(ideas)<<endl;

}