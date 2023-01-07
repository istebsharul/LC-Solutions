#include<bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int i=0;
        int count=0;
        while(i<costs.size() && costs[i]<=coins){
            coins-=costs[i++];
        }
        return i;
    }

int main(){
    vector<int> costs = {1,6,3,1,2,5};
    int coins=20;
    cout<<maxIceCream(costs,coins);
}