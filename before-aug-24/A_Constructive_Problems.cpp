
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pi pair<int,int>
#define all(n) n.begin(), n.end()
#define rall(n) n.begin(), n.end(), greater<int>()
#define fr(i,a,b,c) for(int i=a;i<b;i+=c)
#define rfr(i,a,b,c) for(int i=a;i>=b;i-=c)
#define pb push_back


//-------------------------CODE----------------------
void Shiremonoga(){
    int n,m; cin >> n >> m;
    cout << max(n,m) << endl;
 }
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
        Shiremonoga();
    }
    return 0;
}