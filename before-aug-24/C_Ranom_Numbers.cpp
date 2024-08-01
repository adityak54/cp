
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


// ll dp[200005][7][2];


ll solve(int index,int maxRight, int changed,vector<vector<vector<ll>>> &dp,ll val[],string &s){
    if(index==-1) return 0;

    if(dp[index][maxRight][changed]!=-1) return dp[index][maxRight][changed];

    // calculating the result
    int sign = 1;
    if(s[index]-'A'<maxRight) sign = -1;


    // result ke do possibilites hain. Dono me se maximum hame chahiye
    // ya to current waale ko change karo fir calculate ya bina change kiye hue... and then calculate


    // CASE-1
    // result = current index ka       + bache hue left ka
    ll result = (sign*val[s[index]-'A']) + solve(index-1, max(maxRight,(int)s[index]-'A'),changed,dp,val,s);


    //CASE-2
    if(!changed){
        for(int i=0;i<5;i++){
            if(s[index]-'A' != i){
                // same chiiz
                sign = 1;
                if(i<maxRight) sign = -1;
                // yaha maximum result le le rahe
                 result = max(result,(sign*val[i] + solve(index-1,max(maxRight,i),1,dp,val,s)));
            }
        }
    }

    return dp[index][maxRight][changed] = result;



}
void Yowaimo(){ 
   
    string s;  
    cin>>s;
    ll n;
    n = s.size();


    ll val[] = {1,10,100,1000,10000};
    vector<vector<vector<ll>>> dp(n,vector<vector<ll>>(5,vector<ll>(2,-1)));
    
    ll ans = solve(n-1,0,0,dp,val,s);

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