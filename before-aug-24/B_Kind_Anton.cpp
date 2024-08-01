
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=0;i<n;i++) cin>>b[i];
    vector<int> positive;
    vector<int> negative;
    int one=INT_MAX;
    int minusOne=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]==1) one=min(one,i);
        if(a[i]==-1) minusOne=min(minusOne,i);
        if(b[i]-a[i]>0) positive.push_back(i);
        if(b[i]-a[i]<0) negative.push_back(i);
    }
    if(positive.size()){
        if(positive[0]<=one){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(negative.size()){
        if(negative[0]<=minusOne){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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