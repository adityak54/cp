
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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    ll ans = 0;
    for(int i=0;i<n;i++){
        // kitne aise elements 'x' hain such that a[i]+x <=r
        ans+=upper_bound(a.begin(),a.end(),r-a[i])-a.begin();

        // kitne aise elements 'x' hain such that a[i]+x <l
        ans-=upper_bound(a.begin(),a.end(),l-a[i]-1)-a.begin();

        // req hamara dono ka difference hoga

        if(2*a[i]>=l && 2*a[i]<=r) ans--; // l<=a[i]+a[i]<=r is not valid (alag alag hona chahiye)
    }
    cout<<ans/2<<endl;
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