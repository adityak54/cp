#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = 0;
        int i = 0;
        while(i<s.size()){
        map<char,int> m;
            while(m.size()<=3 && i<s.size()){
                m[s[i]]++;
                i++;
            }
            if(m.size()==4) i--;
            ans++;
        }
        cout<<ans<<endl;
    }
return 0;
}