
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
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(m.find(s)!=m.end()){
            int temp = m[s];
            cout<<s<<temp<<endl;
        }
        else cout<<"OK"<<endl;
        m[s]++;
    }
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}