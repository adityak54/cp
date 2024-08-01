
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

    vector<pair<ll,ll>> order(n+1);
    for(int i=1;i<=n;i++){
        order[i].first = -1;
        order[i].second = -1;
    }
  

    for(int i=0;i<n;i++){
        if(order[a[i]].second==-1) order[a[i]].second = i;
    }
    for(int i=n-1;i>=0;i--){
        if(order[a[i]].first==-1) order[a[i]].first = i;
    }
 
    ll ans = 0;
    ll count = 0;
    

   sort(order.begin(),order.end());
   for(int i=1;i<=n;i++){
        cout<<order[i].first<<" "<<order[i].second<<endl;
    }
    cout<<endl;
    int prev = 1e8;
    for(int i=order.size()-1;i>=1;i--){
        if(order[i].first==order[i].second) continue;
        if(order[i].first>prev) count = 0;
        //  if(order[i].first<prev){
            count+=order[i].first-order[i].second+1;
            prev = order[i].second;
        // }
        ans=max(count,ans);
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