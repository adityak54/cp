
#define pi pair<int,int>
#define ll long long int

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
//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

// memset(variable_name, values, sizeof(variable name))

//-------------  CODE STARTS  -------------------

int a[200000],temp[200000];
int n;

void Yowaimo(){
    cin>>n;
    for(int i=0;i<n;i++) {cin>>a[i]; temp[i]=a[i];}
    sort(temp,temp+n);
    // conditions jab No print karenge
    for(int i=0;i<n;i++){
        if(i<n-2 && temp[i]==temp[i+1] && temp[i]==temp[i+2]){cout<<"NO"<<endl; return;}
        if(temp[i]<=i){cout<<"NO"<<endl; return;}
    }
    
    // memset(freq,0,n+1);
    // memset(pairs,0,n+1);
    int pairs[n+1] = {0};
    int freq[n+1] = {0};
    vector<int> p(n),q(n);
    priority_queue<ll> pq;  // isme just equal to ya smaller number hoga for pairing
    for(int i=0;i<n;i++) freq[a[i]]++;
    for(int i=1;i<=n;i++){
        if(freq[i]==0) pq.push(i);
    }
    // 0 frequency waalo ko 2 frequency waalo k saath pair karenge
    // 1 frequency waale khud se pair ho jaayenge
    for(int i=n;i>=1;i--){
        if(freq[i]==1){
            pairs[i]=i;
        } else if(freq[i]==2){
            pairs[i] = pq.top();
            pairs[pq.top()] = i;
            pq.pop();
        }
    }
    set<int> check;
    for(int i=0;i<n;i++){
        if(check.find(a[i])==check.end()){
            p[i] = a[i];
            q[i] = pairs[a[i]];
            check.insert(a[i]);
        }else{
            p[i] = pairs[a[i]];
            q[i] = a[i];
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) cout<<p[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++) cout<<q[i]<<" ";
    cout<<endl;

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