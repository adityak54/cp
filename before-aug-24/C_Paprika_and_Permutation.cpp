
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

// memset(variable_name, values, sizeof(variable name))

//-------------  CODE STARTS  -------------------

void Yowaimo(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    set<ll> req;
    for(int i=1;i<=n;i++) req.insert(i);
    vector<ll> have; 
    // vector<ll> haveven; 
    for(int i=0;i<n;i++){
        if(a[i]<=n && req.find(a[i])!=req.end()) req.erase(a[i]);
        else{
            // if(a[i]&1) haveodd.push_back(a[i]);
            // else haveven.push_back(a[i]);
            have.push_back(a[i]);
        }
    }
    
    ll k = 1;
    ll ans = 0;
    ll i = 0;
    while(k<=n){
        if(req.find(k)!=req.end()){
        req.erase(k);
        if(have[i]<=2*(k) || have[i]==k+1 || have[i]<k){cout<<-1<<endl; return;}
        i++;
        }
         k++;
    }
    cout<<have.size()<<endl;
    
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