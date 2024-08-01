#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        bool check= true;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[0]){
                if(i%2==0) {
                    cout<<"YES"<<endl;
                    check=false;
                    break;
            }
            }
        }
                if(check) cout<<"NO"<<endl;
    }
return 0;
}