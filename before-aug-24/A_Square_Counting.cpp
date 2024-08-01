#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,s;
        cin>>n>>s;
        if(s<n*n) cout<<0<<endl;
        else if(s==n*n) cout<<1<<endl;
        else{
            cout<<s/(n*n)<<endl;
        }
    }
return 0;
}