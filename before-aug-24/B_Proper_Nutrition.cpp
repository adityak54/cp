
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
    ll n,a,b;
    cin>>n>>a>>b;
    int i=0;
    int j=-1;
    while(n>=0){
        if(n%b==0){
         j=n/b;
         break;
        }
        n-=a;
        i++;
    }
    if(j==-1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl<<i<<" "<<j<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}