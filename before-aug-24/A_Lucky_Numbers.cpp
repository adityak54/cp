
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

int luckiness(int n){
    int chhota=INT_MAX;
    int bada=INT_MIN;
    while(n){
        chhota=min(chhota,n%10);
        bada=max(bada,n%10);
        n=n/10;
    }
    return bada-chhota;
}
void Yowaimo(){
    int l,r;
    cin>>l>>r;
    if(r-l<100){
    int ans = l;
    int difference = INT_MIN;
    for(int i=l;i<=r;i++){
        int luck = luckiness(i);
        if(difference<luck){
            difference = luck;
            ans=i;
        }
    }
    cout<<ans<<endl;
 }
 else{
    while(l%100!=90) l++;
    cout<<l<<endl;
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