
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
ll meraceil(ll a, ll b){
    if(a%b==0) return a/b;
    return (a/b)+1;
}
void Yowaimo(){
    ll n,m,k;
    cin>>n>>m>>k;

    ll reqForDistToBe1 = ((n)*(n-1))/2; 
    if(m>reqForDistToBe1 || m<n-1){cout<<"NO"<<endl; return;}    // self loops aa jaayega
    // if(m<(n-1)) cout<<"NO"<<endl;                       // not enough edges to join all nodes
     if(n==1){
        if(k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    else if(m<reqForDistToBe1){
        if(k>3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
  
    else{
        if(k>2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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



