#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       if(n==1){
        cout<<0<<endl;
        continue;
       }
       
       map<int,int> m;
       for(int i=0;i<n;i++){
        m[arr[i]]++;
       }

       int count = INT_MIN;
       for(auto it: m){
        count=max(it.second,count);
       }
       
       int ans = 0;
       while(count<n){
        ans+=1+min(n-count,count);
        count+=min(n-count,count);
       }
       cout<<ans<<endl;

       
    }
return 0;
}