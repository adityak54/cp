
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

//-------------  CODE STARTS  -------------------

void Yowaimo(){
    ll n;
    cin>>n;
    vector<ll> a(n-1);
    for(auto &it : a) cin>>it;
    set<ll> s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    vector<ll> b;
    b.push_back(a[0]);
    if(s.find(b[0])!=s.end()) {s.erase(b[0]); b.pop_back();}
    for(int i=1;i<n-1;i++){
        if(s.find(a[i]-a[i-1])!=s.end()) s.erase(a[i]-a[i-1]);
        else b.push_back(a[i]-a[i-1]);
    }

    int sum = 0;
    for(auto it : s) sum+=it;
    if(b.empty() || (b.size()==1 && b[0]==sum)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Yowaimo();
    }
    return 0;
}
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

// IN STRING
// agar 0th index pe koi numeric operation karna hai to ek '0' add kardo starting me
