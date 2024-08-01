#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pi pair<int,int>
#define pb push_back
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())




void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int x = a[0];
    int y = b[0];
    // for(int i=1;i<n;i++) x^=a[i];
    for(int i=1;i<n;i++) x^=a[i];
    for(int i=1;i<m;i++) y|=b[i];
    // cout<<x<<endl;
    int val = a[0]|y;
    for(int i=1;i<n;i++){
        val^=(a[i]|y);
    }
    cout<<min(val,x)<<" "<<max(val,x)<<endl;
}
signed main()
{
ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}