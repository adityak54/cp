
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
    ll n,c;
    cin>>n>>c;

    vector<ll> a(n);
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        c-=(a[i]*a[i]);
        sum+=a[i];
    } 
    ll fourac = c/(4*n);
    ll bsquare = (sum*sum)/(4*n*n);
    ll minusb = sum/(2*n);
    ll d = sqrt(bsquare+fourac);
    ll ans = d-minusb;
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