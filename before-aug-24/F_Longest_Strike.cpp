
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

 bool cmp(pair<int, int> x, pair<int, int> y){
         if (x.second != y.second)
            return x.second < y.second; //return the one with smaller first element
         else
           return x.first < y.first; //if first element is equal then return the one with smaller second element
}
//-------------  CODE STARTS  -------------------

void Yowaimo(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    vector<int> v;
    for(auto it : m){
        if(it.second>=k) v.push_back(it.first);
    }
    sort(v.begin(),v.end());
    
    if(v.empty()){cout<<-1<<endl; return;}
    int l = v[0], r=v[0];
    int templ = v[0], tempr = v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]==1){
            tempr = v[i];
        }
        else{
            if(tempr-templ>r-l){
                r = tempr; 
                l = templ;
            }
            templ = v[i];
            tempr = v[i];
        }
    }
    if(tempr-templ>r-l){r=tempr; l=templ;}
    cout<<l<<" "<<r<<endl;
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
