
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
    vector<pair<int,int>> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    for(int i=0;i<n;i++)  cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[a[i].second]=b[i];
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;

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