
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++) m[s[i]]++;
    // if(a<=0) cout<<(n*a)+(n*b)<<endl;
    // else {
        if(m.size()>1)cout<<(n*a)+(2*b)<<endl;
        else cout<<(n*a)+b<<endl;
    // }
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