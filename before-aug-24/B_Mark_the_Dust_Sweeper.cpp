#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int ans = 0;
        long long int ind = 0;
        while(arr[ind]==0){
            ind++;
        }
        for(long long int i=ind;i<n-1;i++){
            if(arr[i]==0) ans++;
            else ans+=arr[i];
        }
        cout<<ans<<endl;
    }
return 0;
}