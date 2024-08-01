
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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    if(n==1){
        cout<<1<<endl;
        return;
    }

    sort(a.begin(),a.end());


    vector<ll> diff;
    for(ll i=1;i<n;i++){
        if(a[i]-a[i-1]>x){
            diff.push_back(a[i]-a[i-1]);
        }
    }

    if(!diff.size()){
        cout<<1<<endl;
        return;
    }

    sort(diff.begin(),diff.end());

    // for(int i=0;i<diff.size();i++){
    //     cout<<diff[i]<<" ";
    // }
    // cout<<endl;


    int ind = 0;
    while(k){
        if((diff[ind]%x)==0){
            if(k<((diff[ind]/x)-1)) break;
            k-=((diff[ind]/x)-1);
        }
        else{
            if(k<diff[ind]/x) break;
            k-=diff[ind]/x;
        }
        
        ind++;
    }
     cout<<diff.size()-ind+1<<endl;


 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}