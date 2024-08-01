
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
    if(n%2!=0){
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if((j-i)%2!=0) cout<<1<<" ";
                else cout<<-1<<" ";
            }
        }
    }

    else{
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(j==i+1 && i%2!=0) {
                    cout<<0<<" ";
                    continue;
                }
                if((j-i)%2!=0) cout<<1<<" ";
                else cout<<-1<<" "; 
            }
        }
    }
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