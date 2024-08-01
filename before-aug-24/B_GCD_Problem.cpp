
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;


// thoda thoda hi samajh aaya

void Yowaimo(){
    ll n;
    cin>>n;
    if(n%2==0) cout<<2<<" "<<n-3<<" "<<1<<endl;
    else{
        int temp = (n-1)/2;
        if(temp%2==0) cout<<temp+1<<" "<<temp-1<<" "<<1<<endl;
        else cout<<temp+2<<" "<<temp-2<<" "<<1<<endl;
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