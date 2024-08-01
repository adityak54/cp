#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    vector<int> quality;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
   for(int i=0;i<n;i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
   }
    bool check = true;
    for(int i=0;i<n-1;i++){
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second){
           continue;
        } 
        else if(v[i].first>v[i+1].first && v[i].second<v[i+1].second){
            continue;
        }
        else check = false;
    }
    if(check) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

return 0;
}