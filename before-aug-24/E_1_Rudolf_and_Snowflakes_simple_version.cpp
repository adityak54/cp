
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
bool check(int i,int n){
    int a = 1;
    while(n>0){
        n-=a;
        a*=i;
    }
    if(!n) return true;
    return false;
}
void Yowaimo(){
    int n;
    cin>>n;

    if(n<7){
        cout<<"NO"<<endl;
        return;
    }

    int end = (ll)sqrt(n);
    // while(end*end<=n) end++;

    for(int i=end;i>=2;i--){
        if(check(i,n)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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