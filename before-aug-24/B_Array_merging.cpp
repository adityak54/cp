
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
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    

    vector<ll> a1((2*n)+1,0);
    a1[a[0]] = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) count++;
        else{
            if(count>a1[a[i-1]]){
                a1[a[i-1]] = count;
            }
                count = 1;
        }
        if(i==n-1){
            if(count>a1[a[i]])
            a1[a[i]] = count;
        }
    }
 

    vector<ll> b1((2*n)+1,0);
    b1[b[0]] = 1;
    int count1 = 1;
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]) count1++;
        else{
            if(count1>b1[b[i-1]]){
                b1[b[i-1]] = count1;
            }
                count1 = 1;
        }
        if(i==n-1){
            if(count1>b1[b[i]]) 
            b1[b[i]] = count1;
        }
    }

    ll ans = 1;
    for(int i=0;i<b1.size();i++){
        ans = max(ans,a1[i]+b1[i]);
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