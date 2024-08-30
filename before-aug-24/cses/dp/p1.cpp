#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1e9+7;
int dp[1000001];
int f(int n,vector<int> &dice){
    if(n==0) return 1;
    if(n<0) return 0;    
    if(dp[n]!=-1) return dp[n];
    int ans = 0;
    for(int i=0;i<6;i++){
        if(dice[i]<=n) ans=((ans%mod)+(f(n-dice[i],dice)%mod))%mod;
    }
    return dp[n]=ans;
    
}
signed main(){
    cout << "Enter " << endl;
    int n; cin >> n;
    vector<int> dice;
    for(int i=1;i<=6;i++) dice.push_back(i);
    memset(dp,-1,sizeof(dp));
    cout << f(n,dice) << endl;
    return 0;
}