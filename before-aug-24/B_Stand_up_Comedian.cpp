
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
    vector<ll> a(4);
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    if(!a[0] && (a[1] || a[2] || a[3])){
        cout<<1<<endl;
        return;
    }
    ll ans = a[0];
    ll temp2 = min(a[1],a[2]);
    ans+=2*temp2;

    a[1]-=temp2;
    a[2]-=temp2;

    if(a[1] || a[2]){
        int temp = max(a[1],a[2]);
        if(temp>a[0]){
            cout<<ans+a[0]+1<<endl;
            return;
        }
        else ans+=temp,a[0]-=temp;
    }



    if(a[3]>a[0]){
        cout<<ans+a[0]+1<<endl;
        return;
    }
    else cout<<ans+a[3]<<endl;
    
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




ll n;
cin>>n;
vector<ll> a(n);
for(int i=0;i<n;i++) cin>>a[i];