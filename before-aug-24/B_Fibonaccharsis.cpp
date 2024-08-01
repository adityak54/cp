
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

void Yowaimo(){
    ll n,k;
    cin>>n>>k;
    if(k>30) {cout<<0<<endl; return;}
    ll ans = 0;
    for(int i=0;i<=n/2;i++){
        //     ...b a n    this is our sequence
        ll b = i;
        ll a = n-i;
        bool check = true;
        for(int pos = k-2;pos>=1;pos--){
            if(b>a){check = false; break;}
            ll temp = b;
            b = a-b;
            a = temp;
        }
        if(check) ans++;
    }
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