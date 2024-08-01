
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

bool solve(int mid, vector<int> &a){
    vector<int> res;
    int val = a[0] - mid;
    res.push_back(val);
    for(int i=1;i<a.size();i++){
        if(abs(val-a[i])>mid){
            val = a[i] - mid;
            res.push_back(val);
        }
    }
    if(res.size()<=3) return true;
    return false;
}

void Yowaimo(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    sort(a.rbegin(),a.rend());
    int low = 0;
    int high = 1e9;
    int ans = 1e9;

    while(low<=high){
        int mid = (low+high)/2;
        if(solve(mid,a)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
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