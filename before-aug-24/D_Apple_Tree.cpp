
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
ll dfs(ll node,ll parent, vector<ll> adj[],vector<ll> &leaf){
     
    for(auto nextNode : adj[node]){
        if(nextNode==parent) continue;
        leaf[node]+=dfs(nextNode,node,adj,leaf);
    }
    if(leaf[node]==0){
        leaf[node] = 1;
        return 1;
    }
    return leaf[node];
}
void Yowaimo(){
    ll n;
    cin>>n;
    vector<ll> adj[n+1];
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> leaf(n+1);
    dfs(1,-1,adj,leaf);
    ll q;
    cin>>q;

    for(int i=0;i<q;i++){
        ll u,v;
        cin>>u>>v;
        cout<<leaf[u]*leaf[v]<<endl;
    }

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