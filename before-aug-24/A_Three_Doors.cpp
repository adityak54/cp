#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(x);
        int test = x;
        bool check=true;
        int n=4;
        while(n--){
            if(v[test-1]==0 && n!=1){
                check=false;
                cout<<"NO"<<endl;
                break;
            }
            test=v[test-1];
        }
        if(check) cout<<"YES"<<endl;
    }
return 0;
}