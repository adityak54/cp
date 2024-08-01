#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1) {
            cout<<k<<endl;
            continue;
        }
        if(n==k){
            cout<<1<<endl;
            continue;
        }
        if(n>k){
            if(n%k==0) cout<<1<<endl;
            else{
                cout<<2<<endl;
            }
        }
        if(n<k){
            if(k%n==0) cout<<k/n<<endl;
            else cout<<(k/n)+1<<endl;
        }
        
    }
return 0;
}