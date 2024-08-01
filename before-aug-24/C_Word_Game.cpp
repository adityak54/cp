
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

int meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}


void Yowaimo(){
    map<string,pair<int,vector<int>>> m;
    int n;
    cin>>n;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            m[s].first++;
            m[s].second.push_back(i);
        }
    }
    vector<int> v(3,0);
    
    for(auto it:m){
        if(it.second.first==1){
            v[it.second.second[0]]+=3;
        }
        else if(it.second.first==2){
            v[it.second.second[0]]++;
            v[it.second.second[1]]++;
        }
       
    }
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }
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