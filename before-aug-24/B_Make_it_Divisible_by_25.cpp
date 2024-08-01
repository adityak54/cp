
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

void Yowaimo(){
    ll n;
    cin>>n;
    // if(n==)
    string s = to_string(n);
    // map<ll,ll> m;
    // int i=1;
    // while(n>0){
    //     m.insert({n%10,i++});
    //     n=n/10;

    // }
    // for(auto it:m) cout<<it.first<<" "<<it.second<<endl;
    // cout<<"Finished"<<endl;
    // cout<<s<<endl;
    map<int,int> m;
    for(int i=s.size()-1;i>=0;i--){
        if(s.find('5')!=-1 && s.find('2')!=-1) m.insert({s.find('2'),s.find('5')});
        if(s.find('5')!=-1 && s.find('2')!=-1) m.insert({s.find('2'),s.find('5')});
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