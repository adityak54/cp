
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

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
 bool cmp(pair<ll, ll> x, pair<ll, ll> y){
         if (x.first != y.first)
            return x.first < y.first; //return the one with smaller first element
         else
           return x.second < y.second; //if first element is equal then return the one with smaller second element
}
//------------------------------------------
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

//-------------  CODE STARTS  -------------------
int n = 10001;
int sum[10001];
void precomp(){
    sum[0] = 0;
    for(int i=1;i<=1e4;i++){
        sum[i]=i+sum[i-1];
    }
}
void Yowaimo(){
    int x;
    cin>>x;
    if(x==2) {cout<<3<<endl; return;}
    auto ind1 = lower_bound(sum,sum+n,x)-sum;
    if(sum[ind1]==x+1){
        cout<<ind1+1<<endl;
    }
    else cout<<ind1<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t = 1;
    cin >> t;
    precomp();
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}


