
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
    ll n,m,a,b,d;
    cin>>n>>m>>a>>b>>d;
    if(d==0){
        cout<<n+m-2<<endl;
        return;
    }
    if((a+d>=n || a-d<=1) && (b+d>=m || b-d<=1)){
        cout<<-1<<endl;
        return;
    }
    cout<<n+m-2<<endl;
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