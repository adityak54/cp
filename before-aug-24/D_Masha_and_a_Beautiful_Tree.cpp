
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
bool f(deque<ll> &a,ll n,ll &ans,ll diff){
     for(int i=0;i<n-1;i+=2){
        if(abs(a[i]-a[i+1])!=diff){
            return false;
        }
        if(a[i]>a[i+1]) {
            swap(a[i],a[i+1]);
            ans++;
        }
        a.push_back(a[i]+a[i+1]);
    }
    for(int i=0;i<n;i++) a.pop_front();
    return true;
}
void Yowaimo(){
    ll n;
    cin>>n;
    deque<ll> a;

    for(int i=0;i<n;i++) {
        ll u;
        cin>>u;
        a.push_back(u);
    }
    
    ll ans = 0;
    ll i = 0;

   while(a.size()>1){
        ll diff = (ll)pow(2,i);
        ll m = a.size();
        if(!f(a,m,ans,diff)){
            cout<<-1<<endl;
            return;
        }
        i+=2;
   }
    // cout<<ans<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
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