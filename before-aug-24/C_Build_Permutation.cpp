
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll powerof2(ll a){
   return a && !(a&a-1);
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
int f(int n,vector<int> &ans){
    int req;
    int a = sqrt(n);
    if(a*a==n) req = n;
    else req = (a+1)*(a+1);
    int temp = n;
    for(int i=(req-n);i<=n;i++){
        ans[i] = temp;
        temp--;
    }
    return temp;
}
void Yowaimo(){
    int n;
    cin>>n;
    vector<int> ans(n);
    int temp = n-1;
    
    while(1) {
         temp=f(temp,ans);
        if(temp<0) break; 
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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