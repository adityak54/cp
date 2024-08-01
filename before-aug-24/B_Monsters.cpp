
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
//------------------CUSTOM SORT-----------------
 bool cmp(pair<int, int> x, pair<int, int> y){
         if (x.first != y.first)
            return x.first > y.first; //return the one with greater first element
         else
           return x.second < y.second; //if first element is equal then return the one with bigger smaller element
}
//------------------------------------------
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))

//-------------  CODE STARTS  -------------------

void Yowaimo(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0 ; i<n ; i++){
        ll x;
        cin>>x;
        v.push_back({x,i+1});
    }
    for(int i=0;i<n;i++){
        v[i].first = (v[i].first%k);
        if(v[i].first==0) v[i].first = k;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++) cout<<v[i].second<<" ";
    cout<<endl;
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