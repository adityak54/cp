
#define pi pair<int,int>
#define pb push_back
#define ll long long int
#define pop pop_back
#define ct cout 
#define el endl
#define sg string
#define vec vector<li>
#define ves vector<string>
#define isort(n) sort(n.begin(), n.end())
#define dsort(n) sort(n.begin(), n.end(), greater<int>());


#include <bits/stdc++.h>
using namespace std;



void Yowaimo(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        if(l%(i+1)==0) ans.push_back(l);
        else{
             int a=((l/(i+1))+1)*(i+1);
            if(a<=r) ans.push_back(a);
            else break;
        }
        //  l++;
    }
    if(ans.size()<n){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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