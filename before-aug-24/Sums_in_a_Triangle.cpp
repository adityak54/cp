
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

// ---------POWER OF 2 OR NOT----------
ll powerof2(ll a){
   return a && !(a&a-1);
}
//----------PRINT BINARY OF A NUMBER ---------------------
void printBinary(ll num){
for(int i=10;i>=0;i--){
cout<<((num>>i)&1);
}
}
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
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

//-------------  CODE STARTS  -------------------
ll n;
vector<vector<ll>> a;
ll dp[1000][1000];

ll f(ll row,ll col){
    if(col>row) return -1e8;
    if(row==n-1) return a[row][col];

    if(dp[row][col]!=-1) return dp[row][col];

    ll d = f(row+1,col);
    ll dr = f(row+1,col+1);

    return dp[row][col] = a[row][col] + max(d,dr);
}
void Yowaimo(){
    cin>>n;
    a.clear();
    memset(dp,-1,sizeof(dp));
    // vector<vector<ll>> dp(n,vector<ll>(n,-1));
    for(int i=0;i<n;i++){
        vector<ll> temp;
        for(int j=0;j<=i;j++){
            int x; cin>>x; temp.push_back(x);
        }
        a.push_back(temp);
    }

    ll ans = f(0,0);
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