
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
vector<vector<ll>> mat;
ll a[1500][1500]; ll curr=1;  // 1500 x 1500 -> 1125000 elements = 1e6 (approx)
vector<ll> dp;


void createMat(){

    // diagonally elements bhar rahe

/*   
    1 3 6 10 
    2 5 9
    4 8 
    7
// this is the order or traversal


*/
    for(int i=1;i<1500;i++){
        for(int j=i;j>=1;j--){
            ll upar = a[j][i-j];
            ll left = a[j-1][i-j+1];
            ll common = a[j-1][i-j];
            // common waala do baar aayega isliye ek baar minus karna padega
            a[j][i-j+1] = (curr*curr) + upar + left - common; 
            dp.push_back( a[j][i-j+1]);
            curr++;
            if(curr==1e6+1) break;
        }
        if(curr==1e6+1) break;
    }
}
void Yowaimo(){
    ll n;
    cin>>n;
    cout<<dp[n-1]<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t;
    cin >> t;
    createMat();
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}