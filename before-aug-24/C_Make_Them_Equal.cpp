
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

bool f(int a,vector<int> &ind,int n){
    for(int i=a;i<=n;i++){
        if(ind[i]){
            if(i%a==0) return false;
        }
    }
    return true;
}
void Yowaimo(){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;

    vector<int> ind(n+1,0);
    bool check = 0;
    for(int i=0;i<n;i++){
        if(s[i]!=c){
            ind[i+1] = 1;
            check = 1;
        }
    }
    if(!check){
        cout<<0<<endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(f(i,ind,n)){
            cout<<1<<endl; cout<<i<<endl;
            return;
        }
    }

    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;

    
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