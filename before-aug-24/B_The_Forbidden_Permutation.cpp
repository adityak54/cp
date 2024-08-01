
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
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> p(n+1), a(m);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p[x] = i;
    }
    for(int i=0;i<m;i++) cin>>a[i];

    ll ans = 1e8;
    for(int i=0;i<m-1;i++){
        ll temp;
        int p1 = p[a[i]];
        int p2 = p[a[i+1]];
        if(p1>p2 || p1+d<p2) temp = 0;
        else if(d<n-1){
            temp=min(p2-p1,(d-(p2-p1)+1));
        }
        else temp= p2-p1;
        ans = min(ans,temp);
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