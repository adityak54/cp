
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
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    cin>>x>>y;
    bool check = false;
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        if((abs(x-a)%2)==(abs(y-b)%2)) check = 1;
    }

    if(check) cout<<"NO"<<endl;
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