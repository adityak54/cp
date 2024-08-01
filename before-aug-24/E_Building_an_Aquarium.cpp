#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pi pair<int,int>
#define pb push_back
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())


// Input Functions
template<typename T>std::vector<T> input(int n) {std::vector<T> v(n);for (int i = 0; i < n; ++i) {std::cin >> v[i];}return v;}
template<typename A, typename B>std::vector<std::pair<A, B>> input(int n) {std::vector<std::pair<A, B>> v;for (int i = 0; i < n; ++i) {A first;B second;std::cin >> first >> second;v.emplace_back(first, second);}return v;}
template<typename T>std::vector<std::vector<T>> input(int n, int m) {std::vector<std::vector<T>> vv(n, std::vector<T>(m));for (int i = 0; i < n; ++i) {for (int j = 0; j < m; ++j) {std::cin >> vv[i][j];}}return vv;}



//-------------  CODE STARTS  -------------------

void solve(){
    int n,k;
    cin>>n>>k;
    // vector<int> a=input<int>(n);
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sortall(a);
    if(k==0){cout<<a[0]<<endl; return;}
    vector<int> pref(n);
    pref[0] = a[0];
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1]+a[i];
    }
    // printContainer(pref);
    int ans = 0;
    int start = 0;
    int end = 1e17;
    // int end = 1e10;
    while(start<=end){
        int mid = start-(start-end)/2;
        if(a[0]>mid){start=mid+1; continue;}
        int sum = 0;
        if(a[n-1]<=mid){
            sum = (mid*n)-pref[n-1];
        }
        else{
        int ind = upper_bound(a.begin(),a.end(),mid)-a.begin();
         sum = (mid*ind)-pref[ind-1];}
        if(sum<=k){
            ans = mid;
            start = mid+1;
        }
        else end = mid-1;
    }
    // cout<<endl;
    cout<<ans<<endl;
    
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

// IN STRING
// agar 0th index pe koi numeric operation karna hai to ek '0' add kardo starting me
