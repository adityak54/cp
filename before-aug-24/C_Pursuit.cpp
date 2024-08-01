
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
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll scorea = 0;
    ll scoreb = 0;

    for(int i=n/4;i<n;i++){
        scorea+=a[i];
        scoreb+=b[i];
    }

    if(scorea>=scoreb){
        cout<<0<<endl;
        return;
    }
  
    ll ans = 0;
    int ja = (n/4);
    int jb = (n/4)-1;
    int i = 0;
    while(scorea<scoreb){
        i++;
        ans++;  
        if((n+i)%4==0 && i!=0){
            scorea+=(100-a[ja]);
            ja++;
        }
        else{
            if(jb>=0){
                scoreb+=b[jb];
                jb--;
            }
            scorea+=100;
        } 
            
    }
    cout<<ans<<endl;

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