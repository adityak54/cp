
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
    vector<vector<char>> a(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++) cin>>a[i][j];
    }

    string s;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(isalpha(a[i][j])) s.push_back(a[i][j]);
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