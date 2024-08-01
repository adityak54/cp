
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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]) count++;
    }
    

    int ans = 0;
    if(count+1 == n) ans = 1;
    else{
        if((n-count)%2==0) ans = 2*(n-count);
        else ans = 2*(n-count) - 1;
    } 

//-------- reverse-------
    reverse(b.begin(),b.end());
    int countr = 0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]) countr++;
    }

    int ans2 = 0;
    if(countr+1 == n || countr==n) ans2 = 2;
    else{
        if((n-countr)%2==0) ans2 = 2*(n-countr)-1;
        else ans2 = 2*(n-countr) ;
    } 

    cout<<min(ans,ans2)<<endl;
    
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