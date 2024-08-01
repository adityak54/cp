
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
    if(a%b==0) return a/b;
    return (a/b)+1;
}
void Yowaimo(){
    ll a,b;
    cin>>a>>b;
    if(a==0 || b==0){
        cout<<0<<endl;
        return;
    }
    ll x = min(a,b);
    ll y = max(a,b);
    if(y/x>1) cout<<x<<endl;
    else{
        cout<<(a+b)/3<<endl;
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