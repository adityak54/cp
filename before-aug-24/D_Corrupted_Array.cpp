
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
    ll n;
    cin>>n;
    vector<ll> b(n+2);

    ll sum = 0;

    for(int i=0;i<n+2;i++){
        cin>>b[i];
    }

    sort(b.begin(),b.end());

    for(int i=0;i<n;i++) sum+=b[i];

    // b(n+1) waala greatest element hi hoga (kyuki sum ke equal hai and bi>0)

    if(sum==b[n+1] || sum==b[n]){
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
        return;
    }

    vector<ll> s;
    for(int i=0;i<n;i++){
        s.push_back(sum-b[i]);
    }
    // 2 2 2 2 3 9 18  -> b (after sorting)
    // 9 9 9 9 9       -> s (sum - bi)

    int ignore = -1;
    for(int i=0;i<n;i++){
        if(s[i]+b[n]==b[n+1]){
            ignore = i;
        }
    }

    if(ignore==-1){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(i!=ignore) cout<<b[i]<<" ";
    }
    cout<<b[n]<<endl;
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