#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        if(s<10){
            cout<<s<<endl;
        }
        else if(s<=17 && s>=10){
            cout<<s-9<<9<<endl;
        }
        else if(s>=18 && s<=24){
            cout<<s-17<<89<<endl;
        }
        else if(s>=25 && s<=30){
            cout<<s-24<<789<<endl;
        }
        else if(s>=31 && s<=35){
            cout<<s-30<<6789<<endl;
        }
        else if(s>=36 && s<=39){
            cout<<s-35<<56789<<endl;
        }
        else if(s>=40 && s<=42){
            cout<<s-39<<456789<<endl;
        }
        else if(s>=43 && s<=44){
            cout<<s-42<<3456789<<endl;
        }
        else{
            cout<<123456789<<endl;
        }
    }
return 0;
}