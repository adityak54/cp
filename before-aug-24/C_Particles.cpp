
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

void Yowaimo(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll maxElement = -1e9;

    for(int i=0;i<n;i++) maxElement=max(maxElement,a[i]);

    if(maxElement<=0){
        cout<<maxElement<<endl;
        return;
    }
    // vector<ll> oddIndexSum;
    // vector<ll> evenIndexSum;
    ll ans = 0; 
    ll temp = 0;
    int k=0;
    int j=n-1;
    // while(a[k]<0) k++;
    // while(a[j]<0) j--;
    for(int i=k;i<=j;i+=2){
        // oddIndex.push_back()
        if(a[i]<=0) continue;
        temp+=a[i];
        ans=max(temp,ans);
    }
    temp = 0;
    for(int i=k+1;i<=j;i+=2){
        if(a[i]<=0) continue;
        temp+=a[i];
        ans=max(ans,temp);
    }
    ans=max(ans,temp);
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