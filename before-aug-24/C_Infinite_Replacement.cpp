
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    string s,t;
    cin>>s>>t;
    if(t.size()>1){
        if(t.find('a')!=-1) cout<<-1<<endl;
        else{
            ll temp = pow(2,s.size());
            cout<<temp<<endl;
        }
        return;
    }
    if(t[0]=='a'){
        cout<<1<<endl;
        return;
    }
     ll temp = pow(2,s.size());
    cout<<temp<<endl;

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