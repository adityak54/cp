#define ll long long int

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        if(n==1){
            if(a[0]>=b[0]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        int diff = INT_MIN;
        bool check = true;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                check = false;
                break;
            }
            diff=max(a[i]-b[i],diff);
        }
        for(int i=0;i<n;i++){
            if(a[i]==0 || b[i]==0){
                if(a[i]-b[i]<=diff) continue;
                else{
                    check = false;
                    break;
                }
            }
            if(a[i]-b[i]!=diff){
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}