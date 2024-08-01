
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

void Yowaimo(){
    ll n,k;
    cin>>n>>k;
    if(n%2==0 && n%4!=0){
        cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
    }
    else if(n%2==0 && n%4==0){
        cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
    }
    else{
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
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