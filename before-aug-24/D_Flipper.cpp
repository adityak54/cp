
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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    if(n==2){
        cout<<v[1]<<" "<<v[0]<<endl;
        return;
    }
    vector<int> ans;
    int r = 0;
    //------------- finding r ------------------------- (done this part using editorial)
    for(int i=0;i<n;i++){
        if(v[min(r+1,n-1)]<=v[min(i+1,n-1)]) r=i;
    }
    // kuchh kuchh cases me r gadbad aa jaa raha tha. Using this, it works for all cases
    // ------------------------------------------------------
    for(int i=r+1;i<n;i++) ans.push_back(v[i]);
     ans.push_back(v[r]);
    // ---------------------------------------------------------
    // -------------  finding l -----------------------
    for(int i=r-1;i>=0;i--){
        if(v[i]>=v[0]) ans.push_back(v[i]);
        else{
            for(int j=0;j<=i;j++) ans.push_back(v[j]);
            break;
        } 
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
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