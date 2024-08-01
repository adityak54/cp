
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
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll alice=0, bob=0;

    for(int i=n-1;i>=0;i-=2){
        if(a[i]%2==0) alice+=a[i];
    }

    for(int i=n-2;i>=0;i-=2){
        if(a[i]%2!=0) bob+=a[i];
    }

    if(bob==alice) cout<<"Tie"<<endl;
    else if(bob>alice) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}