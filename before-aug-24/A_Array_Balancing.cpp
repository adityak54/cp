#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long int i=0;i<n;i++){
            cin>>b[i];
        }
        for(long long int i=0;i<n;i++){
            if(a[i]>b[i]) swap(a[i],b[i]);
        }
        long long int sum = 0;
        for(long long int i=0;i<n-1;i++){
            sum+=abs(a[i]-a[i+1]);
            sum+=abs(b[i]-b[i+1]);
        }
        cout<<sum<<endl;
    }
return 0;
}