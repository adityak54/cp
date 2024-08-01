
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
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    ll ans = 0;
    // column wise dekhenge - (row wise me order badal nahi sakte warna difference bigad jaayega)

    for(ll i=0;i<m;i++){
        vector<ll> temp;
        // -------- column ek temporary vector me le liya --------------
        for(ll j=0;j<n;j++){
            temp.push_back(v[j][i]);
        }
        // ab |ai -aj| solve karna hai for each column
        // lets take 1st testcase (column 1)
        // we need to solve |1-3| + |1-7| + |3-7|
        // 1 7 3 --> 1 3 7 (after sorting)
        //  0 1 2  -> kitne baar positive aayega when we open modulus
        //  1 3 7
        //  2 1 3  -> kitni baar negaive aayega when we open modulus
        // same chiiz har column ke liye karenge

        // implementation
        sort(temp.begin(),temp.end());   // sort kar diya ----
        for(ll j=0;j<n;j++){
            ans+=(j*temp[j])-((n-1-j)*temp[j]);  // (kitni baar positive se open hua - kitni baar negative se open hua) add kar diya ans me
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