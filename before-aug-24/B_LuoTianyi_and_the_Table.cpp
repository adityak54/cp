
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
    cin>>n>>m;
    vector<ll> v(n*m);
    for(ll i=0;i<n*m;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll temp = INT_MIN;
    if(v[0]==v[1]) temp = (n*m-1)*(v[n*m-1]-v[0]);
    // agar max element ko 1st row me rakhe
    ll a = n*m - n;
    ll b = n - 1;
    ll ans = a*(v[n*m-1]-v[0]) + b*(v[n*m-2]-v[0]);
    ans = max(ans,(a*(v[n*m-1]-v[0]) + b*(v[n*m-1]-v[1])));

    // agar max element ko 1st column me daale
    ll c = n*m - m;
    ll d = m - 1;
    ans = max(ans,(c*(v[n*m-1]-v[0]) + d*(v[n*m-2]-v[0])));
    ans = max(ans,(c*(v[n*m-1]-v[0]) + d*(v[n*m-1]-v[1])));
    cout<<max(ans,temp)<<endl;
    

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