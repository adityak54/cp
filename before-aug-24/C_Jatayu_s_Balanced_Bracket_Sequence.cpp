
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

//-------------  CODE STARTS  -------------------
void dfs(int node,vector<int> &visited,vector<int> adj[]){
    visited[node] = 1;
    for(auto it : adj[node]){
        if(!visited[it]) dfs(it,visited,adj);
    }
}
void Yowaimo(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<pair<char,int>> st;
    vector<int> v;
    v.push_back(1);
    vector<int> adj[2*n+1];
    for(int i=0;i<s.size();i++){
        if(st.empty() || st.top().first==s[i]) {
            st.push({s[i],i+1});         
        }
        else if(st.top().first!=s[i]){
            int ind = st.top().second;
            char val = st.top().first;
            adj[i+1].push_back(st.top().second);
            adj[st.top().second].push_back(i+1);
            st.pop();
            // if(ind!=s.size() && s[ind-1]!=s[ind] && s') v.push_back(ind);
            if(st.empty()){
                    for(int j=0;j<v.size();j++){
                        adj[v[j]].push_back(i+1);
                        adj[i+1].push_back(v[j]);
                    }
            // if( s[i]!=s[i+1])
                v.push_back(ind);
            }
        }
    }
    // cout<<"V->";
    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    // cout<<endl;
    // for(int i=1;i<=2*n;i++){
    //     for(auto it : adj[i]) cout<<it<<" ";
    //     cout<<endl;
    // }
    // cout<<endl;
    vector<int> visited(2*n+1);
    int ans = 0;
    for(int i=1;i<=2*n;i++){
        if(!visited[i]) {dfs(i,visited,adj); ans++;}
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
