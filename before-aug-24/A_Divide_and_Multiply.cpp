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
        long long int count = 0;
        for(long long int i=0;i<n;i++){
            if(arr[i]%2==0){
                while(arr[i]%2==0){
                    arr[i]=arr[i]/2;
                    count++;
                }
            }
        }
        sort(arr,arr+n);
        while(count--) arr[n-1]*=2;
        long long int ans = 0;
        for(long long int i=0;i<n;i++) ans+=arr[i];
        cout<<ans<<endl;
    }
return 0;
}
