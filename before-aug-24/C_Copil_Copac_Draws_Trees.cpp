
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
    int n;
    cin>>n;
    vector<vector<int>> inp(n,vector<int>(2));
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        inp[i][0] = a;
        inp[i][1] = b;
    }
    int ans = 0;
    int count = 1;
    vector<int> visited(n+1,0);
    visited[1] = 1;
    while(count<n){
        for(int i=0;i<n;i++){
            if(visited[inp[i][0]] && !visited[inp[i][1]]){
                visited[inp[i][0]] = 1;
                visited[inp[i][1]] = 1;
                count++;
            }
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
    int t;
    cin >> t;
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}