
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
bool check(ll i,ll n){
    int a = 1;
    while(n>0){
        n-=a;
        a*=i;
    }
    if(!n) return true;
    return false;
}
// ll findnearestsquare(ll n){
//     ll ans = -1;
//     ll start = 1;
//     // ll end = (ll)sqrt(n);
//     while(start<=end){
//         ll mid = end - ((end-start)/2);

//         if(mid*mid==n) return mid;
//         else if(mid*mid<n){
//             ans = mid;
//             start=mid+1;
//         }
//         else if(mid*mid>n){
//             end = mid - 1;
//         }
//     }
//     return ans;
// }
void Yowaimo(){
    ll n;
    cin>>n;

    if(n<7){
        cout<<"NO"<<endl;
        return;
    }

    // ll end = 1;
    // while(end*end<=n) end++;
    // ll end = findnearestsquare(n);
    // cout<<end<<endl;

    ll end = (ll) sqrt(n);

    // for(ll i=end;i>=2;i--){
    //     if(check(i,n)){
    //         cout<<"YES"<<endl;
    //         return;
    //     }
    // }
    cout<<end<<endl;
    // cout<<"NO"<<endl;
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