
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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<ll> temp;
    temp.push_back(v[0]);

    // erasing duplicates
    for(ll i=1;i<n;i++){
        if(v[i]!=v[i-1]) temp.push_back(v[i]);
    }
    v.erase(v.begin(),v.end());

    ll ans = temp.size();
    
    // erasing decreasing and increasing pairs 
    for(int i=1;i<temp.size()-1;i++){
        if(temp[i]<temp[i-1] && temp[i]>temp[i+1]) ans--;
        else if(temp[i]>temp[i-1] && temp[i]<temp[i+1]) ans--;
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