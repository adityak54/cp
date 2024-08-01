
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
vector<vector<int>> ans;
vector<int> path;

void dfs(int node,vector<int> adj[]){
    if(adj[node].empty()){
        ans.push_back(path);
        return;
    }

    bool thisPath = false;
    for(auto nextNode: adj[node]){
        if(!thisPath){
            path.push_back(nextNode);
            dfs(nextNode,adj);
            thisPath = true;
        }
        else{
            path = {nextNode};
            dfs(nextNode,adj);
        }
    }
}
void Yowaimo(){
    int n;
    cin>>n;
    vector<int> adj[n+1];
    int root = 0;
    for(int i=1;i<=n;i++){
        int node;
        cin>>node;
        if(i==node) root = node;
        else{
            adj[node].push_back(i);
        }
    }
    // for(int i=1;i<=n;i++){
    //     for(auto it : adj[i]) cout<<it<<" ";
    //     cout<<endl;
    // }
    ans.clear();
    path.clear();
    path.push_back(root);
    dfs(root,adj);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].size()<<endl;
        for(int it : ans[i]) cout<<it<<" ";
        cout<<endl;
    }
    cout<<endl;
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