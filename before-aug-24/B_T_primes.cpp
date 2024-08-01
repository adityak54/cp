
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll powerof2(ll a){
   return a && !(a&a-1);
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
void Yowaimo(){
    ll n;
    cin>>n;
    prime();
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        ll temp = (ll)sqrt(a[i]);
        if(temp*temp==a[i] && isPrime[temp]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // prime();
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}