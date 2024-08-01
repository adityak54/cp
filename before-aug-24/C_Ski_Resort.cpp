
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
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> v;
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]<=q) count++;
        else{
            if(count!=0){
                v.push_back(count);
                count = 0;
            }
        }
        if(i==n-1){
            if(count!=0){
                v.push_back(count);
            }
        }
    }
    if(v.size()==0){
        cout<<0<<endl;
        return;
    }

    ll ans = 0;


    for(int i=0;i<v.size();i++){
        if(v[i]>=k){
            for(int j=k;j<=v[i];j++){
                ans+=v[i]-j+1;
            }
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