
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
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end()); 

    if(n==2){
        cout<<a[0]<<" "<<a[1]<<endl;
        return;
    }
    vector<ll> ans;

    // a[i] == a[i+1] - dono end me jaayenge
    // a[i+1]-a[i] jo least ho  - dono end me jaayenge (if above doesn't hold)

    // req array (this part using editorial)

    // a[i] a[i+2]...a[n], a[1],a[2]...a[i]
    // reason - this generates maximum difficulty
    // a[i] < a[i+2] < ... < a[n] > a[1] < a[2] ... < a[i]

    ll count = INT_MAX;
    ll ind = 0;
    for(ll i=1;i<n;i++){
            if(a[i]-a[i-1]<count){
                count = a[i]-a[i-1];
                ind = i;
            }
    }

    for(int i=ind;i<n;i++) ans.push_back(a[i]);
    for(int i=0;i<ind;i++) ans.push_back(a[i]);

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