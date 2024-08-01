
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
ll ans = 0;
void dfs(ll node,ll parent,ll ind,ll count,vector<pair<ll,ll>> adj[]){
    ans = max(ans,count);
    for(auto nextNode : adj[node]){
        ll node1 = nextNode.first;
        ll ind1 = nextNode.second;

        if(node1==parent) continue;

        if(ind1<ind) dfs(node1,node,ind1,count+1,adj);
        else dfs(node1,node,ind1,count,adj);
    }
}

void Yowaimo(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> adj[n+1];
  
    for(int i=1;i<=n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back({v,(ll)i});
        adj[v].push_back({u,(ll)i});
    }

    dfs(1,-1,-1,1,adj);

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
        ans = 0;
    }
    return 0;
}





