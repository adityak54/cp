
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
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    map<ll,ll> m;
    set<ll> s;
    for(int i=0;i<n;i++){
        m[a[i]]++;
        s.insert({a[i]});
    }
    ll ans = 0;
    ll lastElement = 0;
    ll freq = 0;

    for(auto it: s){
        ll count = m[it];
        if(lastElement!=0 && lastElement+1!=it) ans+=count;
        else ans+=max((ll)0,count-freq);

        lastElement = it;
        freq = count;
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