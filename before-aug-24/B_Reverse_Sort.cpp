
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1 = 0;
    vector<int> ans;
    for(int i=0;i<n;i++) if(s[i]=='1') count1++;
    for(int i=0;i<n-count1;i++) if(s[i]=='1') ans.push_back(i+1);
    if(!ans.size()) cout<<0<<endl;
    else{
        for(int i=n-count1;i<n;i++) if(s[i]=='0') ans.push_back(i+1);
        cout<<1<<endl;
        cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
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