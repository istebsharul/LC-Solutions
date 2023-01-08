#include<bits/stdc++.h>
using namespace std;


int maxPoints(vector<vector<int>>& points) {
        int count=0;
        int maxNo=10001;
        for(int i=0;i<points.size()-1;i++){
            unordered_map<double,int>mp;
            for(int j=i+1;j<points.size();j++){
                if(points[i][0]== points[j][0]){
                    mp[10001]++;
                }
                else{
                    double slope=(double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
                    mp[slope]++;
                }
            }
            for(auto x: mp){
                count = max(count, x.second+1);
            }
        }
        return max(1,count);

int main(){
    vector<vector<int>> points={{1,1},{2,2},{3,3}};
    cout<<maxPoints(points);
    return 0;
}