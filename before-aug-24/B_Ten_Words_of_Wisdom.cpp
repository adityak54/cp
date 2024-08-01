#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

   vector<pii>v;
   for(int i=0; i<n; i++){
    int a;
    int b;
    cin>>a>>b;
    v.pb({a,b});
   }

    set<pii>st;
    for(int i=0; i<n; i++){
        if(v[i].first <= 10){
            st.insert({v[i].second,v[i].first});
        } 
    }

    const pii p = *st.rbegin();
    int firstOfLast = p.first;
    int val = p.second;
    int index;
    for(int i=0; i<v.size();i++){
        if(v[i].second == firstOfLast && v[i].first==val) index = i+1;
    }
    cout<<index<<endl;
  }
}