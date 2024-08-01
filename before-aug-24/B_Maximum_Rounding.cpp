
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
 bool cmp(pair<ll, ll> s, pair<ll, ll> y){
         if (s.first != y.first)
            return s.first < y.first; //return the one with smaller first element
         else
           return s.second < y.second; //if first element is equal then return the one with smaller second element
}
//------------------------------------------
//---IMPORTANT POINTS---

// sOR -> same bit ka sor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

//-------------  CODE STARTS  -------------------

void Yowaimo(){
    // int n;
    // cin>>n; 
    // string s= to_string(n);
    string s; 
    cin >> s;
    int chhota5se = 0;
    for(int j=0;j<s.size();j++){
        if(s[chhota5se]<'5') chhota5se=j;
        else break;
    }
    if (chhota5se==s.length()) {
      cout<<s<<endl;
    }
    else{
      for(int j=chhota5se+1;j<s.length(); j++) s[j]='0';    
      for (int j=chhota5se;j>0;j--) {
        if(s[j]>='5'){
          s[j-1]+= 1;
          s[j]='0';
        }
      }
      if(s[0] >= '5') {
        cout<<10;
        for(int i=1;i<s.size();i++) cout<<s[i];
        cout<<endl;

      }
      else{
        for (int i=0;i<s.length();i++) cout<<s[i];
        cout<<endl;
      }
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