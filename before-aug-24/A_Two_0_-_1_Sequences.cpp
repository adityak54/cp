#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int ind=-1;
        if(n==m && a==b){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<n-m+1;i++){
            if(b[0]==a[i]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            cout<<"NO"<<endl;
            continue;
        }
        bool check = false;
        for(int i=1;i<m;i++){
            if(b[i]!=a[n-m+i]){
              check=true;
              break;
            }
        }
        
        if(check) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
return 0;
}