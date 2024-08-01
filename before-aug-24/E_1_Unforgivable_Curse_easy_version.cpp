
#define pi pair<int,int>
#define ll long long int
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(),a.end(),greater<int>())

#include <bits/stdc++.h>
using namespace std;

// ---------POWER OF 2 OR NOT----------
ll powerof2(ll a){
   return a && !(a&a-1);
}
//----------PRINT BINARY OF A NUMBER ---------------------
void printBinary(ll num){
for(int i=10;i>=0;i--){
cout<<((num>>i)&1);
}
}
//----------SIEVE ---------------------
ll N = 1e6;
vector<ll> isPrime(N+1,1);
void prime(){
    isPrime[0] = isPrime[1]=false;
    for(int i=2;i<=N;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=N;j+=i){
                isPrime[j] = 0;
            }
        }
    }
}
//------------------------------------------
//------------------CUSTOM SORT-----------------
 bool cmp(pair<ll, ll> x, pair<ll, ll> y){
         if (x.first != y.first)
            return x.first < y.first; //return the one with smaller first element
         else
           return x.second < y.second; //if first element is equal then return the one with smaller second element
}
//------------------------------------------
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

//-------------  CODE STARTS  -------------------
void Yowaimo(){
    int n,k;
    cin>>n>>k;
    string s,t;
    cin>>s>>t;

    //--------------------- E1-> editorial------------------------
    // if(n>=6){
    //     // agar 6 ya usse bada length hua string to koi bhi element kahi bhi laa sakte hain
    //     sortall(s);
    //     sortall(t);
    //     cout<<(s==t? "YES": "NO")<<endl;
    // }
    // else{
    //     brute force
    // }


    //----------------for more general case------------

    map<int,int> count;
    for(int i=0;i<n;i++) count[s[i]-'a']++; // yaha freq badhhaya
    for(int i=0;i<n;i++) count[t[i]-'a']--; // yaha freq ghataya
    // agar sabka freq 0 nahi hua iska matlab t me kuchh alag characters present hain
    for(int i=0;i<n;i++){
        if(count[s[i]-'a']!=0){cout<<"NO"<<endl; return;}
    }
    // now we know characters same hain s and t me
    // agar sufficient elements hue ek particular index pe to ham usse kissi se 
    // bhi swap kar sakte hain
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            // iska matlab swap hua hai s[i] yaha pe
            // kya aisi position pe hai s[i] ki wo swap ho jaaye?
            if(max(i,n-i-1)<k){cout<<"NO"<<endl; return;}
            // agar ith position ke aage and piichhe dono jagah k se kam elements hain
            // to usse swap hi nahi kar sakte warna usse kisi se bhi swap kar sakte hain
        }
    }    
    cout<<"YES"<<endl;
    
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