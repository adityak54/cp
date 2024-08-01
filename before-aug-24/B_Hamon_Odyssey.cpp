
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

    ll temp = a[0];

    for(int i=1;i<n;i++) temp=temp&a[i];

    if(temp==0){
        ll x = a[0];
        ll ans = 0;
        for(int i=1;i<n;i++){
            if(x==0){
                ans++;
                x=a[i];
            }
            else x=x&a[i];
            
        }
        if(x==0) ans++;
        cout<<ans<<endl;
    }
    else cout<<1<<endl;
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