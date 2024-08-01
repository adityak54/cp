
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pi pair<int,int>
#define all(n) n.begin(), n.end()
#define rall(n) n.begin(), n.end(), greater<int>()
#define fr(i,a,b,c) for(int i=a;i<b;i+=c)
#define rfr(i,a,b,c) for(int i=a;i>=b;i-=c)
#define pb push_back
// Input Functions
template<typename T>std::vector<T> input(int n) {std::vector<T> v(n);for (int i = 0; i < n; ++i) {std::cin >> v[i];}return v;}
template<typename A, typename B>std::vector<std::pair<A, B>> input(int n) {std::vector<std::pair<A, B>> v;for (int i = 0; i < n; ++i) {A first;B second;std::cin >> first >> second;v.emplace_back(first, second);}return v;}
template<typename T>std::vector<std::vector<T>> input(int n, int m) {std::vector<std::vector<T>> vv(n, std::vector<T>(m));for (int i = 0; i < n; ++i) {for (int j = 0; j < m; ++j) {std::cin >> vv[i][j];}}return vv;}


// Debugging
template<typename T>void printContainer(const std::vector<T>& v) {std::cout << "Vector : ";std::cout << "[ ";for (const T& value : v) {std::cout << value << " ";}std::cout << "]" << std::endl;}
template<typename A, typename B>void printContainer(const std::vector<std::pair<A, B>>& v) {std::cout << "Vector of Pairs: ";std::cout << "[ ";for (const auto& p : v) {std::cout << "(" << p.first << ", " << p.second << ") ";}std::cout << "]" << std::endl;}
template<typename T>void printContainer(const std::vector<std::vector<T>>& vv) {std::cout << "Vector of Vectors:" << std::endl;for (const auto& row : vv) {for (const T& value : row) {std::cout << value << " ";}std::cout << std::endl;}}
template <typename T1, typename T2> void printContainer(const map<T1, T2>& m) { std::cout << "Map : ";cout << "["; for (auto it = m.begin(); it != m.end(); ++it) { if (it != m.begin()) cout << ", "; cout << "["<<it->first << "->" << it->second<<"]"; } cout << "]"<<endl; }
template<typename T>void printContainer(const std::priority_queue<T>& pq) {std::priority_queue<T> temp = pq;std::cout << "Priority Queue: ";while (!temp.empty()) {std::cout << temp.top() << " ";temp.pop();}std::cout << std::endl;}
template <typename T> void printContainer(stack<T> stk) { cout << "["; while (!stk.empty()) { if (stk.size() != sz(stk)) cout << ", "; cout << stk.top(); stk.pop(); } cout << "]"; }
template<typename T> void printContainer(const std::queue<T>& q) {std::queue<T> temp = q; std::cout << "Queue: ";while (!temp.empty()) {std::cout << temp.front() << " ";temp.pop();}   std::cout << std::endl;}
template<typename A, typename B>void printContainer(const std::queue<std::pair<A, B>>& q) {std::queue<std::pair<A, B>> temp = q;     std::cout << "Queue of Pairs: ";while (!temp.empty()) {std::cout << "(" << temp.front().first << ", " << temp.front().second << ") ";temp.pop();}std::cout << std::endl;}
template<typename A, typename B>void printContainer(const std::stack<std::pair<A, B>>& s) {std::stack<std::pair<A, B>> temp = s; std::cout << "Stack of Pairs: ";while (!temp.empty()) {std::cout << "(" << temp.top().first << ", " << temp.top().second << ") ";temp.pop();}std::cout << std::endl;}

// Printing
template<typename T>void print(const std::vector<T>& v) {for (const T& value : v) {std::cout << value << " ";}std::cout << endl;}
template<typename T>void print(const std::vector<std::vector<T>>& vv) {for (const auto& row : vv) {for (const T& value : row) {std::cout << value << " ";}std::cout << std::endl;}}


int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
vector<int>factorial(int n,int m){vector<int>v(n);v[0]=1;for(int i=1;i<n;i++){v[i]=mod_mul(v[i-1],i,m);}return v;}
int powerof2(int a){return a && !(a&a-1);}
void printBinary(int num){for(int i=10;i>=0;i--){cout<<((num>>i)&1);}}
int N = 1e6;
vector<int> isPrime(N+1,1);void prime(){isPrime[0] = isPrime[1]=false;for(int i=2;i<=N;i++){if(isPrime[i]){for(int j=2*i;j<=N;j+=i){isPrime[j] = 0;}}}}
vector<int>divisor(int n){vector<int>res;for (int i=1; i<=sqrt(n); i++){if (n%i == 0){if (n/i == i) res.push_back(i);else{res.push_back(i);res.push_back(n/i);} }}return res;}
bool cmp(pair<int, int> x, pair<int, int> y){if (x.first != y.first)return x.first < y.first; else return x.second < y.second; }
int meraceil(int a,int b){if(a%b==0) return a/b;return (a/b)+1;}
int power(int x,int y,int p){int res=1;while(y>0){if(y&1)res = (res * x)%p;y = y >> 1;x = (x * x)%p;}return (res%p);}
vector<int> primeDivisors(int val){vector<int> res;if(val%2==0) res.pb(2);while(val%2==0){val/=2;}for(int j=3;j<=sqrt(val);j+=2){if(val%j==0) res.pb(j);while(val%j==0){val/=j;}}if(val>2) res.pb(val);return res;}

//-------------------------CODE----------------------
void Shiremonoga(){
    int x,y;
    cin >> x >> y;
    int b = y/2;
    int rem = b*7;
    if(y%2!=0) rem+=11, b++;
    if(rem>=x){cout<<b<<endl; return;}
    else x-=rem;
    int a = x/15;
    if(x%15!=0) a++;
    cout<<b+a<<endl;
 }
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
        Shiremonoga();
    }
    return 0;
}