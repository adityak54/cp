
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;


 bool cmp(pair<ll, ll> x, pair<ll, ll> y){
         if (x.first != y.first)
            return x.first < y.first; //return the one with smaller first element
         else
           return x.second < y.second; //if first element is equal then return the one with smaller second element
}


//-------------  CODE STARTS  -------------------

void Yowaimo(){
    ll n;
    cin>>n;   
    vector<ll> a(n);
    for(auto &it : a) cin>>it;
    sortall(a);
    ll sum = 0;
    ll prev = a[0];
    for(int i=1;i<n;i++){
            sum+=a[i]-a[i-1];
            prev = a[i-1];
    }
    ll sum2 = 0;
    ll ans2 = 0;
    for(int i=1;i<n;i++){
        ll curr = a[i]-a[i-1];
        sum2=(curr+(sum2+(i-1)*(a[i]-a[i-1])));
        ans2+=sum2;
    }
    cout<<sum-ans2<<endl;
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
