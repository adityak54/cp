#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
  
    map<int,int> a1;
    map<int,int> b1;
    for(int i=0;i<a.size();i++){
        a1[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        b1[b[i]]++;
    }
    int ans1 = 0;
    for(auto it:a1){
        if(b1.find(it.first)==b1.end()) ans1+=it.second;
    }
    int ans2 = 0;
    for(auto it:b1){
        if(a1.find(it.first)==a1.end()) ans2+=it.second;
    }
    if(ans1==0 && ans2==0) cout<<-1<<endl;
    else cout<<max(ans1,ans2)<<endl;
return 0;
}