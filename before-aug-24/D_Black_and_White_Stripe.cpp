
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll a=k;
    ll j=0;
    ll ans = INT_MAX;
    ll count = 0;
    for(int i=0;i<k;i++){
        if(s[i]=='W') count++;
    }
    j++;a++;
    ans=min(ans,count);
    for(int i=0;i<n-k;i++){
        if(s[i]=='W') count--;
        if(s[i+k]=='W') count++;
        ans=min(ans,count);
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