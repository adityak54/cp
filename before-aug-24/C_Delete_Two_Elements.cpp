
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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    ll sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    if((2*sum)%n!=0){
        cout<<0<<endl;return;
    }


    ll reqSum = (2*sum)/n;
    map<ll,ll> m;
    for(int i=0;i<n;i++) m[a[i]]++;

    ll ans = 0;

    for(int i=0;i<n;i++){
        if(m.find(reqSum-a[i])!=m.end()){
            ans+=m[reqSum-a[i]];
            if(reqSum-a[i]==a[i]) ans--;
        }
    }

    cout<<ans/2<<endl;


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