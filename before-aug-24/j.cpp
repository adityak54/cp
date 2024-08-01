#define ll long long int
#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
    cin>>n;
    int sz = (n*(n-1))/2;
    vector<int> b(sz);
    for(int i=0;i<sz;i++) cin>>b[i];
    sort(b.begin(),b.end());
    if(n==2){
        cout<<b[0]<<" "<<b[0]<<endl; return;
    }
    if(n==3){
        cout<<b[0]<<" "<<b[2]<<" "<<b[2]<<endl;
        return;
    }
    vector<int> a;
    a.push_back(b[0]);
    int i = n-1;
    int temp = n;
    while(i<sz-1){
        a.push_back(b[i]);
        i+=temp-2;
        temp--;
    }
    a.push_back(b[sz-1]);
    a.push_back(b[sz-1]);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}