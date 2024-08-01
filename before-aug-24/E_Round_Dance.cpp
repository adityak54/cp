
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

bool dfs(ll node, ll parent,vector<ll> &visited,set<ll> adj[]){
    visited[node] = 1;
    for(auto nextNode : adj[node]){
        if(!visited[nextNode]){
             if(dfs(nextNode,node,visited,adj)) return true;
        }
        else if (parent != nextNode) return true;
    }

    return false;

}
void Yowaimo(){
    ll n;
    cin>>n;
    set<ll> adj[n+1];
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
         adj[i+1].insert(a);
         adj[a].insert(i+1);
    }

    ll count = 0;
    ll cycleCount = 0;
    vector<ll> visited(n+1);

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            count++;
            // cycle kitne hai 
            if(dfs(i,-1,visited,adj)) cycleCount++;
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(auto it : adj[i]) cout<<it<<" ";
    //     cout<<endl;
    // }


    if(cycleCount == count) cout<<cycleCount<<" "<<count<<endl; 
    else cout<<cycleCount+1<<" "<<count<<endl;
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