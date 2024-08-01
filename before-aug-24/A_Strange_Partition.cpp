
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll higher = 0;
    ll sum = 0;
    for(ll i=0;i<n;i++){
        higher+=meraceil(arr[i],x);
        sum+=arr[i];
    }
    cout<<meraceil(sum,x)<<" "<<higher<<endl;
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