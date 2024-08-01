
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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    map<ll,ll> m1;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        m1[v[i]%m]++;
    }
    // for(auto it : m1) cout<<it.first<<" "<<it.second<<endl;
    ll ans = 0;
    vector<ll> check(m);
    if(m1.find(0)!=m1.end()){
        ans = 1;
        m1.erase(0);
    }
    if(m1.find(m/2)!=m1.end() && !m&1){
        ans++;
        m1.erase(m/2);
    }
    for(auto it : m1){
        if(check[it.first]) continue;
        if(m1.find(m-it.first)!=m1.end()){        
            check[m-it.first] = 1;
            ll a = it.second;
            ll b = m1[m-it.first];
            if(abs(a-b)<=1){
                ans++;
            }
            else{
                ans+=1+abs(a-b)-1;
            }
        }
        else ans+=it.second;
        check[it.first] = 1;
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