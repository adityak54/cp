
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

// ---------POWER OF 2 OR NOT----------
ll powerof2(ll a){
   return a && !(a&a-1);
}
//-------------------------------------
//----------SIEVE ---------------------
ll N = 1e6;
vector<ll> isPrime(N+1,1);
void prime(){
    isPrime[0] = isPrime[1]=false;
    for(int i=2;i<=N;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=N;j+=i){
                isPrime[j] = 0;
            }
        }
    }
}
//------------------------------------------
//---------------------- CODE STARTS -------------

bool f(int row,int col,int m,vector<string> &grid,vector<vector<int>> &dp){
    if(col==m) return 1;
    if(grid[row][col]=='W') return 0;
    if(dp[row][col]!=-1) return dp[row][col];
    // agar niiche ya upar hai to we have to move there, otherwise usse paint nahi kar
    // paayenge

    if(grid[1-row][col]=='B') return dp[row][col]=f(1-row,col+1,m,grid,dp);
    return dp[row][col] = f(row,col+1,m,grid,dp); 
}
void Yowaimo(){
    int m;
    cin>>m;
    vector<string> grid;

    for(int i=0;i<2;i++){
        string a;
        cin>>a;
        grid.push_back(a);
    }
    vector<vector<int>> dp(2,vector<int>(m,-1));
    if(f(0,0,m,grid,dp) || f(1,0,m,grid,dp)){cout<<"YES"<<endl; return;}
    cout<<"NO"<<endl;

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