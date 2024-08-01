#define ll long long int
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m, s;
    cin >> m >> s;
    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];
    // for(int i = 0; i < m; i++) cout << a[i] << " ";
    int i = 0, j = 0;
    int ans = 0;
    long long product = 1;
    while(i<m){
        product *= a[i];   
        while(j < i && product > s){
            product /= a[j++];
        }
        if(product == s) ans = max(ans,i-j+1);
        i++;
    }
    cout << ans << endl;
}
int main(){
int t=1;
// cin>>t;
while(t--){
solve();
}
return 0;
}