#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll powerof2(ll a){
   return a && !(a&a-1);
}



void Yowaimo(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    map<ll,ll> m;
    for(int i=0;i<n;i++){
        int j = a[i];
        if(m.find(j)!=m.end()) {m[j]+=m[j]; continue;}  
        while(j<=n){
            m[j]++;
            j+=a[i];
        }
    }
    ll ans = 0;
    for(auto it : m){
        ans=max(ans,it.second);
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