
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pi pair<int,int>
#define sortall(n) sort(n.begin(), n.end())
#define rsortall(n) sort(n.begin(), n.end(), greater<int>());


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


void Shiremonoga(){
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a=input<int>(n);
    // parity of a+b = parity of a^b
    int cnto = 0, cnte = 0;
    for(int i=0;i<n;i++){
        if(a[i]&1) cnto++;
        else cnte++;
    }
    if((x&1) && (y&1)){
        if(cnto&1) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    if(!(x&1) && (y&1)){
        if(cnto&1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    if((x&1) && !(y&1)){
        if(cnto&1) cout<<"Alice"<<endl; 
        else cout<<"Bob"<<endl;
    }
    if(!(x&1) && !(y&1)){
        if(cnto&1) cout<<"Bob"<<endl; 
        else cout<<"Alice"<<endl;
    }

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