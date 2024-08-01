
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
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool check = 0;

    ll temp = a[0];

    string s = "1";
    for(int i=1;i<n;i++){
        if(temp<=a[i] && !check){
            s.push_back('1');
            temp = a[i];
        }
        else if(temp>a[i] && !check && a[i]<=a[0]){
            check = 1;
            temp = a[i];
            s.push_back('1');
        }
        else if(temp>a[i] && !check && a[i]>a[0]){
            s.push_back('0');
        }
        else if(temp>a[i] && check){
            s.push_back('0');
        }
        else if(check && temp<a[i] && a[i]>a[0]){
            s.push_back('0');
        }
        else if(check && temp<=a[i] && a[i]<=a[0]){
            s.push_back('1');
            temp = a[i];
        }
         
    }

    cout<<s<<endl;
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