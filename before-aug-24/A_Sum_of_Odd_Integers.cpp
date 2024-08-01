
#define pi pair<int,int>
#define ll long long int



#include <bits/stdc++.h>
using namespace std;

int meraceil(int a, int b){
    if(a%b==0) return a/b;
    return (a/b)+1;
}

void Yowaimo(){
    ll n,k;
    cin>>n>>k;
    if((n%2!=0 && k%2==0) || (n%2==0 && k%2!=0) || k>n){
        cout<<"NO"<<endl;
        return;
    }
    ll count = meraceil(n,2);
    ll sum = (n*(2 + (n-1)*2))/2; 
    if(count<k || sum<n) cout<<"NO"<<endl;
    else if((k*k)>n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl; 
    
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