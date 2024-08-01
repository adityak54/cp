#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int m;
        cin>>m;
        long long int b[m];
        long long int sum = 0;
        for(long long int i=0;i<m;i++){
            cin>>b[i];
            sum+=b[i];
        }
        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        if(sum>n-1) sum=sum%(n);
        cout<<a[sum]<<endl;
        

    }
return 0;
}