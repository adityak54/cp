#define ll long long int

#include<bits/stdc++.h>
using namespace std;
void solve(){
     ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool check = 0;
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]) ans=max(ans,a[i-1]);
    }
     cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
{    solve();}
return 0;
}