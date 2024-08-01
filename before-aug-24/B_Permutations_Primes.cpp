
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
bool is_prime(int x){
    if(x<=1){
        return false;
    }
    for(int i=2;i*i<=x;i++) if(x%i==0) return false;

    return true;
}
void Yowaimo(){
    ll n;
    cin>>n;
  

    vector<ll> a(n);
    a[0] = 2;
    a[n-1] = 3;

    a[n/2] = 1;
    ll j = 4;
    for(int i=1;i<n-1;i++){
        if(a[i]==1) continue;
        a[i] = j;
        j++;
    }


    for(int i=0;i<n;i++) cout<<a[i]<<" ";
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