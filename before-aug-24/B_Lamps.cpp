
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
    vector<vector<ll>> v(n+1);
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    if(n==1){
        cout<<v[1][0]<<endl;
        return;
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end(),greater<int>());
        ll k = i;
        ll j = 0;
        while(k--){
            if(j>=v[i].size()) break;
            ans+=v[i][j];
            j++;
        }

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