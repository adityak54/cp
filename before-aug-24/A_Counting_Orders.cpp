
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

int mod = 1e9+7;
void Yowaimo(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    // -------- sort kar diya----------
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // ----------------------------------

    //-------------- har ek b[i] ke liye kitne correct a[i] available hai  -------------
    vector<int> temp;
    int a1 = n-1,b1=n-1;
    int count = 0;
    int prevCount = 0;
         // using two pointers(ek a ke liye aur ek b ke liye)
    while(a1>=0 && b1>=0){
        if(a[a1]>b[b1]){
            while(a[a1]>b[b1]){
            a1--;
            count++;
            }
        }
        else{
            temp.push_back(count+prevCount);
            prevCount+=count;
            b1--;
            count = 0;
        }
    }
    while(temp.size()<n) temp.push_back(n);  // jo b ke elements bach gaye unke liye

    //-------------------------------------------------------

    ll ans = 1;
    for(int i=0;i<temp.size();i++){
        ans = (ans*(temp[i]-i))%mod;
    }
    cout<<ans<<endl;
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