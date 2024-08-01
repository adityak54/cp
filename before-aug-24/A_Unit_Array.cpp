
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

void Yowaimo(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int sum = 0;
    int count1 = 0;
    int countm1 = 0;

    for(int i=0;i<n;i++){
        sum+=a[i];
        if(a[i]==-1) countm1++;
        else count1++;
    }
    if(sum>=0 && countm1%2==0) cout<<0<<endl;
    else{
        int ans = 0;
        while(count1<countm1 || countm1%2!=0){
            ans++;
            count1++;
            countm1--;
        }
        cout<<ans<<endl;
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