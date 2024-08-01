
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll powerof2(ll a){
   return a && !(a&a-1);
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
    vector<pi> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    map<ll,ll> x;
    map<ll,ll> y;
    map<ll,ll> xy;
    map<ll,ll> yx;

    for(int i=0;i<n;i++){
        x[v[i].first]++;
        y[v[i].second]++;
        xy[v[i].first-v[i].second]++;
        yx[v[i].first+v[i].second]++;
    }
    ll ans = 0;
    for(auto it : x, auto it){
        ans+=it.second*(it.second-1);
    }
    for(auto it : y){
        ans+=it.second*(it.second-1);
    }
    for(auto it : xy){
        ans+=it.second*(it.second-1);
    }
    for(auto it : yx){
        ans+=it.second*(it.second-1);
    }
    cout<<ans<<endl;
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