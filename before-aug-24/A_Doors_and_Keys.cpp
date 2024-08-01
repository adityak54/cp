#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.find('r')<s.find('R') && s.find('g')<s.find('G') && s.find('b')<s.find('B')) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}