#define ll long long int
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cout << __builtin_popcount(n) << endl;
    vector<int> ans;
    int cnt = 0;
    while(n > 0){
        if(n&1){
            ans.push_back(cnt);  
        }
        cnt++;
        n = n>>1;
    }
    for(int i = 0; i < ans.size(); i++){
        ans[i] = ans.back()-ans[i]+1;
    }
    for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i] << endl;
    }

}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}