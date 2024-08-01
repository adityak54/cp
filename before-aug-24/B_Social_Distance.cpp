#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n>m){
            cout<<"NO"<<endl;
            continue;
        }
        long long int ans = 0;
        sort(arr,arr+n);
        for(long long int i=n-1;i>=0;i--){
            ans+=arr[i]+1;
            if(i!=n-1 && arr[i]<arr[i+1]) ans+=arr[i+1]-arr[i];
        }
        if(ans<=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}