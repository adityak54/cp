
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

// Output functions
template <typename T> void printContainer(const T& container) { cout << "["; for (auto it = container.begin(); it != container.end(); ++it) { if (it != container.begin()) cout << ", "; cout << *it; } cout << "]"; }
template <typename T1, typename T2> void printContainer(const map<T1, T2>& m) { cout << "{"; for (auto it = m.begin(); it != m.end(); ++it) { if (it != m.begin()) cout << ", "; cout << it->first << ":" << it->second; } cout << "}"; }
template <typename T1, typename T2> void printContainer(const vector<T1, T2>& m) { cout << "{"; for (auto it = m.begin(); it != m.end(); ++it) { if (it != m.begin()) cout << ", "; cout << it->first << ":" << it->second; } cout << "}"; }
template <typename T> void printContainer(priority_queue<T> pq) { cout << "["; while (!pq.empty()) { if (pq.size() != sz(pq)) cout << ", "; cout << pq.top(); pq.pop(); } cout << "]"; }
template <typename T> void printContainer(stack<T> stk) { cout << "["; while (!stk.empty()) { if (stk.size() != sz(stk)) cout << ", "; cout << stk.top(); stk.pop(); } cout << "]"; }

bool cmp(pair<ll, ll> x, pair<ll, ll> y)
{
    if (x.first != y.first)
        return x.first < y.first; //return the one with smaller first element
    else
        return x.second < y.second; //if first element is equal then return the one with smaller second element
}

//-------------  CODE STARTS  -------------------

void Yowaimo(){
    ll n,m;
    cin>>n>>m;
    vector<ll> k(n);
    for(int i=0;i<n;i++) cin>>k[i];
    sortall(k);
    for(int i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        ll d = (b*b)-(4*a*c);
        int ind = lower_bound(k.begin(),k.end(),b)-k.begin();
        // if(ind==n){cout<<"NO"<<endl; continue;}
        if(ind<n && k[ind]*(2*b-k[ind])>d){cout<<"YES"<<endl; cout<<k[ind]<<endl; continue;}
        if(ind>0 && k[ind-1]*(2*b-k[ind-1])>d){cout<<"YES"<<endl; cout<<k[ind-1]<<endl; continue;}
        else cout<<"NO"<<endl;
    }
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
