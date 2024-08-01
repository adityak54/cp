#define ll long long int
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<int> temp;
    int cnt = 0;
    int i=0;
    while(i<n){
        if(a[i]==1){
            while(i<n && a[i]==1){
                i++;
                cnt++;
            }
            temp.push_back(cnt);
        }else{
            cnt=0;
            i++;
        }
    }
    int ans = (n*(n+1))/2;
    if(temp.empty()){
        cout<<ans<<endl;
        return;
    }
    int total = 0;
    for(int i=0;i<temp.size();i++){
        total+=(temp[i]*(temp[i]+1))/2;
    }
    int mx = INT_MAX;
    int tempTot = total;
    for(int i=0;i<temp.size();i++){
        tempTot-=(temp[i]*(temp[i]+1))/2;
        int tt = temp[i]/2;
        if(temp[i]&1){
            tempTot+=(tt*(tt+1));
        }else{
            tempTot+=(tt*(tt+1))/2;
            tempTot+=(tt*(tt-1))/2;
        }
        mx = min(mx,tempTot);
        tempTot = total;
    }
    cout<<ans-mx<<endl;
}
int main(){
int t=1;
// cin>>t;
while(t--){
solve();
}
return 0;
}