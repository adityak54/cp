#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countA = 0;
        int countB = 0;
        bool check = true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') countA++;
            else countB++;
        }
        if(countA==1 || countB==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(s[0]!=s[1] || s[s.size()-1]!=s[s.size()-2]){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<s.size()-1;i++){
            if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }
        if(check) cout<<"YES"<<endl;
    }
return 0;
}