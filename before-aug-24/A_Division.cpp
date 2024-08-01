
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    int n;
    cin>>n;
    if(n>=1900) cout<<"Division 1"<<endl;
    else if(n<1900 && n>=1600) cout<<"Division 2"<<endl;
    else if(n<1600 && n>=1400) cout<<"Division 3"<<endl;
    else cout<<"Division 4"<<endl;
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