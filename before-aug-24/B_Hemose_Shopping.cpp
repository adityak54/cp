
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

    for(int i=0;i<n;i++) cin>>a[i];
  
    if(n>=(2*x)){
        cout<<"YES"<<endl;
        return;
    }
    vector<int> temp;
    for(int i=0;i<n;i++) temp.push_back(a[i]);
    sort(a.begin(),a.end());

    for(int i=n-x;i<=x-1;i++){
        if(a[i]!=temp[i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;

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