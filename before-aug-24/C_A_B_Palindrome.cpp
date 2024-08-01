
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
    int a,b;
    cin>>a>>b;

    string s;
    cin>>s;

    ll n = s.size();

    if(a%2!=0 && b%2!=0){
        cout<<-1<<endl;
        return;
    }

    for(ll i=0;i<n;i++){
        if(s[i]=='0') a--;
        else if(s[i]=='1') b--;
    }

    if(a<0 || b<0){
        cout<<-1<<endl;
        return;
    }


    for(int i=0;i<n/2;i++){
        if(s[i]!='?' && s[n-i-1]!='?'){
            if(s[i]!=s[n-i-1]){
                cout<<-1<<endl;
                return;
            }
        }
    }


    for(int i=0;i<n/2;i++){
        if(s[i]=='?' && s[n-i-1]!='?'){
            s[i] = s[n-i-1];
            if(s[i]=='1') b--;
            else a--;
        }
        else if(s[i]!='?' && s[n-i-1]=='?'){
            s[n-i-1] = s[i];
            if(s[i]=='1') b--;
            else a--;
        }
    }
    if(a<0 || b<0){
        cout<<-1<<endl;
        return;
    }

    for(int i=0;i<n/2;i++){
        if(a<0 || b<0){
            cout<<-1<<endl;
            return;
        }
        if(s[i]=='?' && s[n-i-1]=='?'){
            if(a>=2){
                s[i]='0';
                s[n-i-1] = '0';
                a-=2;
            }
            else if(b>=2){
                s[i] = '1';
                s[n-i-1] = '1';
                b-=2;
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    if(s[n/2]=='?'){
        if(a>0) s[n/2] = '0';
        else if(b>0) s[n/2] = '1';
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<s<<endl;

    
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