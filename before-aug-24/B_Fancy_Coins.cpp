
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pi pair<int,int>
#define sortall(n) sort(n.begin(), n.end())
#define rsortall(n) sort(n.begin(), n.end(), greater<int>());

bool check(int m, int k, int a, int ak,int mid){
    int q = m/k;
    if(q<=ak){
        m-=q*k;
        a+=mid;
    }else if(q<=ak+mid){
        m-=q*k;
        a+=ak+mid-q;
    } else{
        m-=(ak+mid)*k;
    }
    return m<=a;
}
void Shiremonoga(){
    int m,k,a,ak;
    cin >> m >> k >> a >> ak;
    int start = 0;
    int end = m;
    int ans = 0;
    while(start<=end){
        int mid = start - (start-end)/2;
        if(check(m,k,a,ak, mid)){
            ans = mid;
            end = mid-1;
        } else{
            start = mid+1;
        }
    }
    cout << ans << endl;
    
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