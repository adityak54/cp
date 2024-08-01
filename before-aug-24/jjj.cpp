#include<bits/stdc++.h>
#define int long long int
#define pi pair<int,int>
#define pb push_back
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())
using namespace std;
int mod = 998244353;
vector<int> dp(200003);
void factorial(){
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<200003;i++){
        dp[i] = (i*dp[i-1])%mod;
    }
}
void solve(){
  string s;
    cin >> s;
    int n = s.size();
    int cnt1 = 0, cnt0 = 0;
    if(n==1){cout<<0<<" "<<0<<endl; return;}
    for(int i=0;i<n;i++){
        if(s[i]=='1') cnt1++;
        else cnt0++;
    }
    if(cnt1==0 || cnt0==0){
        cout<<n-1<<" "<<dp[n]<<endl;
        return;
    }
    int ans1 = 0;
    int ans2  = 1;
    int prev = 0;
    int cnt = 1;
    int cnt2 = 0;
    for(int i=1;i<n;i++){
        if(s[i]==s[prev]){
            cnt++;
        }
        else{
            ans2=((ans2%mod)*(dp[cnt]%mod))%mod;
            ans1+=(cnt-1)%mod;
            if(cnt>1) cnt2++;
            cnt = 1;
            prev = i;
        }
    }
    if(cnt>1) cnt2++;
    ans1+=(cnt-1)%mod;
    ans2=((ans2%mod)*(dp[cnt]%mod))%mod;
    ans2=((ans2%mod)*(dp[cnt2]%mod))%mod;
    cout<<ans1<<" "<<ans2<<endl;
}
signed main(){
int t=1;
cin>>t;
factorial();
while(t--){
solve();
}
return 0;
}