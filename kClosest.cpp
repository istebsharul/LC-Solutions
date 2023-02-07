#include<bits/stdc++.h>
using namespace std;

int dis(int x, int y){
        return sqrt(x*x+y*y);
    }
void kClosest(vector<vector<int>>& points, int k) {
    vector<int,vector<int>> ans;
    for(int i=0;i<points.size();i++){
        int d=dis(points[i][0],points[i][1]);
        vector<int> temp;
        temp.push_back(points[i][0]);
        temp.push_back(points[i][1]);
        ans.push_back(d,temp);
    }
    for(auto x: res){
        cout<x.first<<" = "<<;
        for(auto y: x.second)<<y<<" "<<endl;
    } 
}

int main(){
    vector<vector<int>> v={{1,3},{-2,2}};
    kClosest(v,1);
}