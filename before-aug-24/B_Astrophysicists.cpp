
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
    ll n,k,g;
    cin>>n>>k>>g;
    ll silver = g*k;
    // n-1 logo agar (g-1)/2 coins diye to round off karne ke baad 0 ho jaayega
    ll saved = (n-1)*((g-1)/2);

    // baaki coins last person ko de diye
    // ab check karna hai ki usme kitna bachega

    ll lastPerson = g*k - saved;
    // ye bhi nearest multiple of g me round off hoga..ussi ke basis pe dekhenge
    ll r = lastPerson%g;
    if(r>= meraceil(g,2)) saved-=(g-r); // next greater multiple me round off hoga. Hence g-r coins aur dene padenge
    else saved+=r;

    if(saved<silver) cout<<saved<<endl;
    else cout<<silver<<endl;
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






