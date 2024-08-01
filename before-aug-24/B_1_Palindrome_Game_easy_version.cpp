
#define pi pair<int,int>
#define ll long long int

#include <bits/stdc++.h>
using namespace std;

ll meraceil(ll a,ll b){
if(a%b==0) return a/b;
return (a/b)+1;
}

struct cmp{
bool operator()(pi a,pi b){
    if(a.first>b.first) return true;
    if(a.first==b.first){
       if(a.second<b.second) return true;
    }
return false;
  }
};

void Yowaimo(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count0 = 0;
    int count1 = 0;

    for(int i=0;i<n;i++) {
        if(s[i]=='0') count0++;
        else count1++;
    }

    if(count0%2!=0){    
        if(count0 == 1){
            cout<<"BOB"<<endl;
            return;
        }
        // int noOfswitches = (count0-1)/2;  // ye line ke baad niche waala hi case ban jaayega
                                             // but start Bob ko karna padega
                                             // isliye Alice hi jeetega
        // if(noOfswitches%2==0){
        //     cout<<"BOB"<<endl;
        // }
        // else{
            cout<<"ALICE"<<endl;
        // }

    }
    else{
        // int noOfswitches = count0/2;
        // if(noOfswitches%2==0){                    // isme bhi Bob jeet raha
        //     cout<<"DRAW"<<endl;
        // }                           
        // else{
            cout<<"BOB"<<endl;
        // }
    }
    
    
  
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