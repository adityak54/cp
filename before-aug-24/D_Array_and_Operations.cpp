
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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    ll ans = 0;
    for(int i=0;i<n-(2*k);i++) ans+=a[i];

    int start = n-(2*k);

    int temp = 0;
    int count = 0;

    for(int i=start+1;i<n;i++){
        if(a[i]==a[i-1]) temp++;
        else count = max(temp+1,count),temp=0;
    } // maximum frequency of any element in the desired array
    if(k) count = max(temp+1,count);
    if(count==2*k) ans+=(count/2);

    else if(count>k) ans+=count-k;    //  ans+=(count-((2*k)-count))/2

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