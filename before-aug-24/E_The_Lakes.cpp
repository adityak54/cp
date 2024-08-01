
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

void f(int i,int j,int n,int m,vector<vector<int>> &arr,vector<vector<int>> &visited,ll &count){
    if(i==n || j==m || i<0 || j<0) return;
    if(arr[i][j]==0) return;
    if(visited[i][j]==1) return;
    if(visited[i][j]!=1){
        visited[i][j]=1;
        count+=arr[i][j];
    } 
    f(i-1,j,n,m,arr,visited,count); // up
    f(i+1,j,n,m,arr,visited,count); // down
    f(i,j+1,n,m,arr,visited,count); // right
    f(i,j-1,n,m,arr,visited,count); // left
}
void Yowaimo(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    vector<vector<int>> visited(n,vector<int>(m,0));
    
    ll ans = 0;
    for(int p=0;p<m;p++){
        for(int q=0;q<n;q++){
            if(arr[q][p]!=0 && !visited[q][p]){
            ll count = 0;
            f(q,p,n,m,arr,visited,count);
            ans=max(ans,count);
            count = 0;
            }
        }
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