#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool check = true;
        if(n==2){
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2!=0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            while(n>1){
                if(n%2!=0){
                    cout<<"YES"<<endl;
                    check=false;
                    break;
                }
                n=n/2;
            }
        }
        if(check) cout<<"NO"<<endl;
    }
return 0;
}