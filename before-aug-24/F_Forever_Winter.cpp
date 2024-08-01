
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
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> map(n+1,0);
    for(int i=1;i<=n;i++){
        map[adj[i].size()]++;
    }
    int x = 0;
    for(int i=1;i<=n;i++){
        if(map[i]==1) x=i;
    }

   
    int xy = map[1];

    if(x) cout<<x<<" "<<xy/x<<endl;
    else{
        for(int i=2;i<=n;i++){
            if(map[i]!=0) x=map[i]-1;
            // x+1 vertices have such edges
        }

        cout<<x<<" "<<xy/x<<endl;
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