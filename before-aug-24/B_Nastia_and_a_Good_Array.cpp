
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

// array ->   9  6  3  11  15
// final ->   5  4  3  4   5 

// minimum element ke according aisa array bana rahe ki adjacent element ka diff 1 ho
   ll n;
   cin>>n;
   vector<ll> a(n);
   for(int i=0;i<n;i++) cin>>a[i];

   ll ind = 0;
   ll temp = INT_MAX;
   for(int i=0;i<n;i++){
        if(temp>a[i]){
            temp = a[i];
            ind = i;
        }
   }
   cout<<n-1<<endl;
   
   for(int i=0;i<n;i++){
        if(i==ind) continue;
        cout<<i+1<<" "<<ind+1<<" "<<temp+abs(i-ind)<<" "<<temp<<endl;
   }
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