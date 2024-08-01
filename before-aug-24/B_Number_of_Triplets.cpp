
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
    set<pair<int,int>> s;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
        s.insert({a,b});
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double slope = (a[i].second-a[j].second)/(a[i].first-a[i].second);
                
        }
    }

 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    // cin >> t;
    // while (t--)
    // {
        Yowaimo();
    // }
    return 0;
}