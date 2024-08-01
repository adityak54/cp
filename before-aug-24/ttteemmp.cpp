#include <bits/stdc++.h>
using namespace std;

#define pi pair<int,int>
#define int long long int
#define pb push_back
#define fr(i,a,b,c) for(int i=a;i<b;i+=c)
#define rfr(i,a,b,c) for(int i=a;i>=b;i-=c)
#define all(n) n.begin(), n.end()
#define rall(n) n.begin(), n.end(), greater<int>()

//-------------------------CODE----------------------
void Yowaimo(){
    int n; cin >> n;
    string s; cin >> s;
    string temp = s;
    sort(all(temp));
    int i = 0;
    string ls;
    vector<int> ind;
    ind.pb(n-1);
    char prev = s[n-1];
    ls.pb(s[n-1]);
    rfr(i,n-2,0,1){
        if(s[i]>=prev){
            prev = s[i];
            ls.pb(s[i]);
            ind.pb(i);
        }
    }
    reverse(all(ls));
    // cout << ls << endl;
    // print(ind);
    fr(i,0,ind.size(),1){
        s[ind[i]] = ls[i];
    }
    
    fr(i,0,n,1){
        if(s[i]!=temp[i]){cout<<-1<<endl; return;}
    }
    int cnt = 0;
    fr(i,1,ls.size(),1) if(ls[i]==ls[0]) cnt++;
    cout << ind.size()-1-cnt << endl;
    

 }
signed main()
{
    int T = 1;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        Yowaimo();
    }
    return 0;
}


