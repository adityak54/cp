
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
    ll n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    if(v.back()==1){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>ans;
    int cnt=0;
    for (int i = n-1; i >=0; i--) {
        if(v[i]==0){
            if(cnt){
                ans.back()=cnt;
                cnt=0;
            }
            ans.push_back(0);
        }
        else{
            ans.push_back(0);
            cnt++;
        }
    }
    if(cnt) ans.back()=cnt;
    cout<<"YES"<<endl;
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
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