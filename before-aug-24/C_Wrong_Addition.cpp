
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
    ll a,b;
    cin>>a>>b;
    string ans;
    while(a){
        if(!b){
            cout<<-1<<endl;
            return;
        }
        if(b%10>=a%10){
            ans.push_back((char)((b%10)-(a%10)));
            b=b/10;
            a=a/10;
        }
        else{
            if(b%100<a%10 || (b%100)-(a%10)>9){
                cout<<-1<<endl;
                return;
            }
            ans.push_back((char)((b%100)-(a%10)));
            b=b/100;
            a=a/10;
        }
    }
    while(b){
        ans.push_back((char)(b%10));
        b=b/10;
    }
    reverse(ans.begin(),ans.end());
    
    ll x = 0;

    for(int i=0;i<ans.size();i++){
        x = (10*x)+ans[i];
    }
    cout<<x<<endl;
    
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