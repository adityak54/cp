
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
    vector<string> grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    bool check = true;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(grid[i][j]=='0') continue;
            bool down = (grid[i+1][j]=='1');
            bool right = (grid[i][j+1]=='1');
            check = (down || right);
            if(!check) break;
        }
        if(!check) break;
    }
    if (check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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




