
#define pi pair<int,int>
#define ll long long int
#define pl pair<long,long>

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
bool dfs(ll node,vector<pl> adj[], vector<ll> &visited, vector<ll> &dist){
    visited[node] = 1;
    for(auto nextNode : adj[node]){
        ll p1 = node;
        ll p2 = nextNode.first;
        ll distance = nextNode.second;

        if(!visited[p2]){
            dist[p2] = dist[p1]+distance;
            if(!dfs(p2,adj,visited,dist)) return false;
        }
        else if(dist[p2]!=dist[p1]+distance) return false;
    }
    return true;
}
void Yowaimo(){
    ll n,m;
    cin>>n>>m;
    vector<pl> adj[n+1];
    for(int i=0;i<m;i++){
        int p1,p2,d;
        cin>>p1>>p2>>d;
        adj[p1].push_back({p2,d});
        adj[p2].push_back({p1,-d});
    }
    vector<ll> visited(n+1);
    vector<ll> dist(n+1);
    for(int i=1;i<=n;i++){
        if(!visited[i]) if(!dfs(i,adj,visited,dist)) {cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
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