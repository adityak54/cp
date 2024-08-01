
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
    int n,x;
    cin>>n>>x;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];

    int ans = 0;

    for(int i=0;i<n;i++){
        if((x|a[i])==x){
            ans|=a[i];
        }
        else break;
    }
    for(int i=0;i<n;i++){
        if((x|b[i])==x){
            ans|=b[i];
        }
        else break;
    }
    for(int i=0;i<n;i++){
        if((x|c[i])==x){
            ans|=c[i];
        }
        else break;
    }
    if(ans==x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

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