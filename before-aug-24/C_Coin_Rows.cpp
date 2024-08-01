
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
    vector<vector<ll>> a(2,vector<ll>(n));

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }

    vector<ll> frow;
    vector<ll> srow;
    ll temp1 = 0;
    ll temp2 = 0;
    for(int i=n-1;i>0;i--){
        temp2+=a[0][i];
        frow.push_back(temp2);
    }
    reverse(frow.begin(),frow.end());
    frow.push_back(0);
    srow.push_back(0);
    for(int i=0;i<n-1;i++){
        temp1+=a[1][i];
        srow.push_back(temp1);
    }


    ll ans = 1e9;

    for(int i=0;i<n;i++){
        frow[i] = max(frow[i],srow[i]);
    }

    for(int i=0;i<n;i++) ans = min(frow[i],ans);
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