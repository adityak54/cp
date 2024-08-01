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
    string a,b;
    cin>>a>>b;
    
    if(a==b){
        cout<<0<<endl;
        return;
    }
    
    int count = 0;
    string c;
    while(count<(b.size()-a.size())){
        c.push_back('0');
        count++;
    } 
    c+=a;
    int k = 0;
    while(b[k] == c[k]) k++;
    cout<<abs(b[k]-c[k])+(9*(b.size()-1-k))<<endl;
    
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