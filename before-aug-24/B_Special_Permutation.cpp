
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a>=n/2 || b<=n/2){
        cout<<-1<<endl;
        return;
    }
    vector<int> ans;
    int trackA,trackB;
    
    for(int i=1;i<=n;i++){
        if(i==a) trackA = i;
        if(i==b) trackB = i;
        ans.push_back(n-i+1);
    }
    swap(ans[trackA-1],ans[trackB-1]);
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
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