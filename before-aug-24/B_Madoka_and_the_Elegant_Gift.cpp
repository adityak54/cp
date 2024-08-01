
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
    int n,m;
    cin>>n>>m;
    vector<string> adj;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        adj.push_back(s);
    }
//  Agar proper rectangle na bane to NO hoga

// Implementation -> 2x2 matrices jo present hain unka sum==3 hua to improper rectangle ban jaayega
// (from editorial)

//  1 0     1 1     1 1     0 1      ye sab hi improper rectangle banayenge
//  1 1     1 0     0 1     1 1 


    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int sum = adj[i][j]-'0';      //  curr
                sum+= adj[i][j+1]-'0';    //  right
                sum+= adj[i+1][j]-'0';    //  down
                sum+= adj[i+1][j+1]-'0';  //  downright

            if(sum==3){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;

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