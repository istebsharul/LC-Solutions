#include <bits/stdc++.h>
using namespace std;

void pr(vector<int> &c)
{
    for (auto x : c)
        cout << x << " ";
}
int f = 0;

// int totalFruit(vector<int>& fruits) {
//         vector <int> a;
//         vector <int> b;
//         a.push_back(fruits[0]);
//         int j;
//         for(j=1;j<fruits.size();j++){
//             if(fruits[j]==a.back()) a.push_back(fruits[j]);
//             else {
//                 b.push_back(fruits[j]);
//                 break;
//             }
//         }
//         int sum=a.size()+b.size();
//         for(int i=j+1;i<fruits.size();i++){
//             if(fruits[i]==a.back()) a.push_back(fruits[i]);
//             else if(fruits[i]!=a.back() && fruits[i]==b.back()) {
//                 b.push_back(fruits[i]);
//             }
//             else{
//                 if(f==0){
//                     f=1;
//                     a.clear();
//                     a.push_back(fruits[i]);
//                 }
//                 else{
//                     f=0;
//                     b.clear();
//                     b.push_back(fruits[i]);
//                 }
//             }
//             int bS=a.size()+b.size();
//             sum=max(sum,bS);

//             pr(a);
//             cout<<"+ ";
//             pr(b);
//             cout<<" = "<<bS;
//             cout<<endl;
//         }
//         return sum;
//     }

int totalFruit(vector<int> &fruits)
{
    int ans = 0;
    map<int, int> mp;
    int i = 0, j = 0, n = fruits.size();
    while (i < n)
    {
        mp[fruits[i]]++;
        while (mp.size() > 2)
        {
            if (mp[fruits[j]] == 1)
            {
                mp.erase(fruits[j]);
            }
            else
            {
                mp[fruits[j]]--;
            }
            j++;
        }
        ans = max(i - j + 1, ans);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> fruits = {1, 0, 1, 4, 1, 4, 1, 2, 3};
    // vector<int> fruits={6,2,1,1,3,6,6};
    cout << totalFruit(fruits);
}