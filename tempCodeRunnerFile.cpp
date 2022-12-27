#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int n){
   
        arr[1]=1;
        arr[2]=2;
        if(n<=1) {
            cout<<"hii"<<endl;
            return 1;}
        else if(n==2) {
             cout<<"hii"<<endl;
            return 2;}
        else{
             cout<<"hii"<<endl;
            for(int i=3;i<=n;i++){
                 cout<<"hii"<<endl;
            arr[i]=2*arr[i-1]+arr[i-2];
            }
            return arr[n];
        }
        return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<f(arr,n);
}