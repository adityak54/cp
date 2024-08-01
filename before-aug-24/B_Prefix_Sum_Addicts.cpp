
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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(k);
    for(ll i=0;i<k;i++) cin>>v[i];
    if(k==1){
        cout<<"Yes"<<endl;
        return;
    }
    vector<ll> temp;
    temp.push_back(v[0]);
    for(int i=1;i<k;i++){
        temp.push_back(v[i]-v[i-1]);
    }
    for(ll i=2;i<k;i++){
        if(temp[i]<temp[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    
    ll diff = n-k+1;
    if(temp[0]>temp[1]*diff) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
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