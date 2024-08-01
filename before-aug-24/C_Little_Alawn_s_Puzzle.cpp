
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

//-------------  CODE STARTS  -------------------
ll mod = 1e9+7;
void dfs(int node,vector<int> &visited,vector<int> adj[]){
    visited[node] = 1;
    for(auto nextNode : adj[node]){
        if(!visited[nextNode]) dfs(nextNode,visited,adj);
    }
}
void Yowaimo(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);

    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;

    vector<int> adj[n+1];
    
    for(int i=0;i<n;i++){
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }

    int count = 0;
    vector<int> visited(n+1);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            count++;
            dfs(i,visited,adj);
        }
    }
    int ans = 1;
    for(int i=0;i<count;i++){
        ans = (ans*2)%mod;
    }
    cout<<ans<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

// IN STRING
// agar 0th index pe koi numeric operation karna hai to ek '0' add kardo starting me
