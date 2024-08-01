
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

void Yowaimo(){
    int n,m;
    cin>>n>>m;
    set<int> adj[n+1];

    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
    }
//   logic -(using brute force on adjacency matrix)
//   adjacency matrix me jiska size 1 hai (leaf node) usko hata do 
//   as we are removing it, wo jis bhi node se juda tha usme se bhi uska presence hata do


//  1-> 2                           1->
//  2-> 1 3       afterwards ->     2-> 3
//  3-> 2 4                         3-> 2
//  4-> 3                           4->

// same process until there are no such nodes whose number of edge is 1.
//                                                  (adjacency me uska size 1 ho)
    int ans = 0;
    while(1){
        vector<int> temp;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==1){
                temp.push_back(i);
            }
        }
        
        if(!temp.size()) break;

        for(int i=0;i<temp.size();i++){
            auto node = adj[temp[i]].begin();
            adj[*node].erase(temp[i]);
            adj[temp[i]].clear();
        }
        ans++;
    }
    cout<<ans<<endl;  
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}