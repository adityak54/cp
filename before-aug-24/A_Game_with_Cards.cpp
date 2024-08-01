#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int alice[n];
        for(int i=0;i<n;i++){
            cin>>alice[i];
        }
        cin>>m;
        int bob[m];
        for(int i=0;i<m;i++){
            cin>>bob[i];
        }
        sort(alice,alice+n,greater<int>());
        sort(bob,bob+m,greater<int>());
        if(alice[0]==bob[0]) cout<<"Alice"<<"\n"<<"Bob"<<endl;
        else if(alice[0]>bob[0]) cout<<"Alice"<<"\n"<<"Alice"<<endl;
        else cout<<"Bob"<<"\n"<<"Bob"<<endl;


    }
return 0;
}