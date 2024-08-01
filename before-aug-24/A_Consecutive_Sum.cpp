
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
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,priority_queue<int>> m;
    for(int i=0;i<n;i++){
        m[arr[i]%k].push(arr[i]);
    }
    ll ans = INT_MIN;
    for(auto it : m){
        int i = k;
        ll sum = 0;
        while(i--){
            sum+=it.second.top();
            it.second.pop();
        }
        ans=max(ans,sum);
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