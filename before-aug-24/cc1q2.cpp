
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
    // map<string,bool> mp;

bool isPalin(string s,int n){
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}
bool f(string s,int n,map<string,bool> &mp){
    if(isPalin(s,n)) return true;
    if(n<=3) return false;

    if(mp.find(s)!=mp.end()) return mp[s];


    for(int j=1;j<n-1;j++){
        string temp2 = s;
        string temp = s.erase(j-1,3);
        s= temp2;
        bool ans;
        if(mp.find(temp)!=mp.end()) ans = mp[temp];
        else {ans = f(temp,n-3,mp); mp.insert({temp,ans});}
        if(ans) return true;
    }

    return false;
}
void Yowaimo(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,bool> mp;

    if(n%3==1){
        cout<<"YES"<<endl;
        return;
    }
    if(f(s,n,mp)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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