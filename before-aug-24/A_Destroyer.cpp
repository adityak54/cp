
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

    vector<int> v(100,0);

    for(int i=0;i<n;i++) v[a[i]]++;

    // for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<endl;
    int count = v[0];
    for(int i=1;i<n;i++){
        if(v[i]==0) break;
        if(v[i]>v[i-1]){
            cout<<"NO"<<endl;
            return;
        }
        count+=v[i];
    }

    if(count!=n){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;

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