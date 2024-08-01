
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
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    bool check = true;
    for(int i=0;i<n;i++){
        if(b[i]-a[i]>1 || a[i]>b[i]){
            cout<<"NO"<<endl;
            check = false;
            break;
        }
    }
    if(check) cout<<"YES"<<endl;
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