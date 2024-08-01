
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
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    string p = to_string(d);
    for(int i=0;i<s.size();i++){
        if(s[i]-'0'<d){
            s.insert(i,p);
            break;
        }
        else if(s[i]-'0'==d){
            while(i<s.size() && s[i]-'0'>=d) i++;
            if(i!=s.size()) s.insert(i,p);
            break;
        }
    }
    if(s.size()==n) s+=p;
    cout<<s<<endl;
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