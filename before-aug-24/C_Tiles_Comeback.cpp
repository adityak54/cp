
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

void Yowaimo(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    int countLast = 1;
    int ind = n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]==a[n-1]) {countLast++; ind=i;} 
        if(countLast==k) break; 
    }
    if(a[0]==a[n-1]){
        if(countLast>=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    if(countLast<k){cout<<"NO"<<endl; return;}
    int countF = 1;
    for(int i=1;i<ind;i++){
        if(a[i]==a[0]) countF++;
    }
    if(countF>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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