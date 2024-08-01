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

//---IMPORTANT POINTS---

// XOR -> same bit ka xor 0 hota hai
// 2^n ->  (1<<n)  (1 pe n times left shift)
// To set ith bit ->  ((1<<i)|a)  (aisa number liye jiski ith bit set ho, uske saath OR kardiya
// To unset ith bit ->  ((~(1<<i))&a)  (aisa number liye jiski ith bit unset ho, uske saath AND kardiya
// To toggle ith bit (0->1, 1->0) -> (a^(1<<i))

//-------------  CODE STARTS  -------------------



bool valid(int n, int m, vector<string> &v){
    for(int i=0;i<n;i++){
        int cntw = 0;
        int cntb = 0;
        for(int j=0;j<m;j++){
            if(v[i][j]=='W') cntw++;
            else if(v[i][j]=='B') cntb++;
        }
        if(cntw!=cntb) return false;
    }
    for(int i=0;i<m;i++){
        int cntw = 0;
        int cntb = 0;
        for(int j=0;j<n;j++){
            if(v[j][i]=='W') cntw++;
            else if(v[j][i]=='B') cntb++;
        }
        if(cntw!=cntb) return false;
    }
    return true;
}
void Yowaimo(){
    int n,m;
    vector<string> v;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    // UP-DOWN ke liye hame row me maintain karna hai therefore row wise
    bool check = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='U'){
                if(check){v[i][j]='B'; v[i+1][j]='W'; check = false;}
                else{v[i][j]='W'; v[i+1][j]='B'; check = true;}
            }
        }
    }
    // LEFT-RIGHT ke liye hame column me maintain karna hai therefore column wise
    check = false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[j][i]=='L'){
                if(check){v[j][i]='B'; v[j][i+1]='W'; check = false;}
                else{v[j][i]='W'; v[j][i+1]='B'; check = true;}
            }
        }
    }
    if(valid(n,m,v)==false){cout<<-1<<endl; return;}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout<<v[i][j];
        cout<<endl;
    }
    
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
        Yowaimo();
    }
    return 0;
}


// memset(variable_name, values, sizeof(variable name))
// long long int may give runtime error with upperbound and lowerbound

// IN STRING
// agar 0th index pe koi numeric operation karna hai to ek '0' add kardo starting me
