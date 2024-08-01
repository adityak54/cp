
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
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<pair<int,pair<int,int>>> v;
    for(int i=0;i<n;i++){
        v.push_back({b[i],{a[i],i}});
    }
    sort(v.begin(),v.end());

    int ans = 0;
    for(int i=n-1;i>=0;i--){
        if(t>=v[i].second.first+v[i].second.second){
            cout<<v[i].second.second+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        Yowaimo();
    }
    return 0;
}