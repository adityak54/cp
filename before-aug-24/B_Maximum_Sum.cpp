
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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n); 
    ll subArraySum[n];
    subArraySum[0]=a[0];   
    for(int i=1;i<n;i++){
        subArraySum[i]=subArraySum[i-1]+a[i];
    }
    // a - 1 2 5 6 10
    // s - 1 3 8 14 24

    ll ans = subArraySum[n-(k-0)-1];  // when j is 0
    for(int j=1;j<=k;j++){
        ans = max(ans,(subArraySum[n-(k-j)-1]-subArraySum[2*j-1]));
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