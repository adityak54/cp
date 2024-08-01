#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        bool check = true;
        for(int i=0;i<n;i++){
            if(arr[n+i]-arr[i]<x){
                cout<<"NO"<<endl;
                check = 0;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
    }
return 0;
}