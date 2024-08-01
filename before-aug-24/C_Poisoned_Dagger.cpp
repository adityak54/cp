
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
ll f(ll k,ll n,vector<ll> &a){
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(i!=n-1 && a[i+1]-a[i]<k){
            ans+=(a[i+1]-a[i]);
        }
        else ans+=k;
    }
    return ans;
}
void Yowaimo(){
    ll n,h;
    cin>>n>>h;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // 1 se lekar h ke biich me hoga 'k'
    // since h -> 10^18 ja raha, binary search lagana hoga

    ll start = 1;
    ll end = h;
    while(start<=end){
        ll mid = ((end-start)/2) + start;
        ll time = f(mid,n,a);
        if(time>=h){
            end = mid - 1;
        }
        else if(time<h){
            start = mid + 1;
        }
    }
    cout<<end+1<<endl;
    
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