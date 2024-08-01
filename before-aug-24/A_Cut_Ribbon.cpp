
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

//-------------  CODE STARTS  -------------------

int f(int i,int n,vector<int> &av,vector<vector<int>> &dp){
    if(i==0){
        if(n%av[0]==0) return n/av[0];
        return -1e9;
    }
    if(n==0) return 0;
    if(dp[i][n]!=-1) return dp[i][n];
    int take = -1e9;
    if(av[i]<=n) take = 1+f(i,n-av[i],av,dp);
    int notTake = f(i-1,n,av,dp);
    return dp[i][n]=max(take,notTake);
}
void Yowaimo(){
    int n;
    cin>>n;
    vector<int> av(3);
    for(int i=0;i<3;i++) cin>>av[i];
    vector<vector<int>> dp(3,vector<int>(n+1,-1));
    int ans = f(2,n,av,dp);
    cout<<ans<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t = 1;
    // cin >> t;
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
