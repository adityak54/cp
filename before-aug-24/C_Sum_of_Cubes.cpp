#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define li long long int
#define uli unsigned long long int
#define ppb pop_back
#define ct cout 
#define el "\n"
#define sz size()
#define ff first
#define ss second
#define sg string
#define vec vector<li>
#define vvi vector<vector<li>>
#define ppi pair<int,pair<int,int>>
#define pii pair<li,li>
#define vep vector<pair<li,li>>
#define mep map<li,li>
#define ves vector<string>
#define isort(n) sort(n.begin(), n.end())
#define dsort(n) sort(n.begin(), n.end(), greater<int>());
#define all(n) n.begin(), n.end()
#define ub upper_bound
#define lb lower_bound
#define maxe *max_element
#define mine *min_element
#define X INT_MAX
#define Y INT_MIN
#define sp " "
#define cy  cout<<"YES"<<endl
#define cn  cout<<"NO"<<endl
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define acc(v,r)  accumulate(v.begin(),v.begin()+r,0ll)
li MOD=1e9+7;   



set<li>s;
void precalculate(){
    for (li i = 1; i<=1e4+5 ; ++i)
    {
        s.insert(i*i*i);
    }
}


void pranay_prasoon(){
li n;
cin>>n;

for (li i = 1; i*i*i<=n ; ++i)
{
if (s.count(n-(i*i*i)))
{
    cy;
    return;
}
}
cn;

 
 











 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

    //factorial();
    precalculate();
    int queries;
    cin >> queries;
    while (queries--)
    {
        pranay_prasoon();
    }
    return 0;
}