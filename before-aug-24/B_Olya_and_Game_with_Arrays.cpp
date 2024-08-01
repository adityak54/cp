
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
    vector<vector<ll>> a;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<ll> arr(m);
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        a.push_back(arr);
    }

    for(int i=0;i<n;i++){
        sortall(a[i]);
    }
    ll sum = 0;
    ll e = INT_MAX;
    for(int i=0;i<n;i++){
        sum+=a[i][1];
        e = min(e,(ll)a[i][0]);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans,sum+e-a[i][1]);
    }
    cout<<ans<<endl;;
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
