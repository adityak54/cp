
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

bool isPalindrome(vector<ll> &v,ll n){
    for(ll i=0;i<n/2;i++) if(v[i]!=v[n-i-1]) return false;
    return true;
}
void Yowaimo(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }


    if(isPalindrome(v,n)) cout<<0<<endl;
    else{
        vector<ll> diff;
        for(ll i=0;i<n/2;i++){
            diff.push_back(abs(v[i]-v[n-i-1]));
        }
        sort(diff.begin(),diff.end());

        ll ans = diff[0];
        for(int i=1;i<diff.size();i++){
            ans = __gcd(ans,diff[i]);
        }
        cout<<ans<<endl;
    }

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