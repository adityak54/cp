
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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = 0;
    int temp = 0;
    // vector<int> subX;
    // for(int i=0;i<n;i++){
    //     temp = temp^a[i];
    //     subX.push_back(temp);
        
    // }
    // for(int i=0;i<n;i++) cout<<subX[i]<<" "; cout<<endl;
    for(int i=0;i<256;i++){
        vector<int> v(256);
        int currXor = 0;
        for(int j=0;j<n;j++){
            currXor=currXor^a[j];
            if(v[currXor^i]){
                ans=max(i,ans);
            }
            else if(currXor==i) ans = max(i,ans);
            v[currXor]++;
            // v[currXor^i]++;
        }
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