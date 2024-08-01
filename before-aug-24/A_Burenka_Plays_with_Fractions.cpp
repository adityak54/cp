
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

void Yowaimo(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll e = a*d;
    ll f = b*c;
    if(e==f){
        cout<<0<<endl;
        return;
    }
    
    if((f!=0 && e%f==0) || (e!=0 &&f%e==0)) cout<<1<<endl;
    else cout<<2<<endl;


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
        // cout<<"TESTCASE "<<t<<endl;
        Yowaimo();
    }
    return 0;
}

