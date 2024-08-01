
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}

struct cmp{
bool operator()(pi a,pi b){
    if(a.first>b.first) return true;
    if(a.first==b.first){
       if(a.second<b.second) return true;
    }
return false;
  }
};

void Yowaimo(){
    ll n,m;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    map<ll,ll> m1;
    for(int i=0;i<n;i++) m1.insert({a[i],i});
    ll v=0,p=0;
    for(int i=0;i<m;i++){
        v+=m1[b[i]]+1;
        p+=n-m1[b[i]];
    }
    cout<<v<<" "<<p<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}