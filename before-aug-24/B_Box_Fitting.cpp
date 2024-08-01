
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
ll meraceil(ll a, ll b){
    if(a%b==0) return a/b;
    return (a/b)+1;
}
void Yowaimo(){
    ll n,W;
    cin>>n>>W;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    ll ans = 0;
    priority_queue<int> pq;
    for(int i=n-1;i>=0;i--){
        if(pq.empty()){
            ans++;
            if(W-a[i]) pq.push(W-a[i]);
            continue;
        }

        if(pq.top()>=a[i]){
            int temp = pq.top();
            pq.pop();
            temp-=a[i];
            if(temp) pq.push(temp);
        }
        else{
            ans++;
            if(W-a[i]) pq.push(W-a[i]);
        }
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