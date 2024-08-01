
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

void Yowaimo(){
    int n;
    cin>>n;
    if(!(n&1)) {cout<<"No"<<endl; return;}
    cout<<"Yes"<<endl;
    int j = 2*n;
    for(int i=1;i<=n;i+=2){
        cout<<i<<" "<<j--<<endl;
    }
    for(int i=2;i<n;i+=2){
        cout<<i<<" "<<j--<<endl;
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