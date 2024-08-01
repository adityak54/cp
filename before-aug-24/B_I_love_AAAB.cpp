#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[s.size()-1]!='B' || s[0]=='B'){
            cout<<"NO"<<endl;
            continue;
        }
        int sum = 0;
        bool check = true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') sum++;
            else sum--;
            if(sum<0){
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
return 0;
}