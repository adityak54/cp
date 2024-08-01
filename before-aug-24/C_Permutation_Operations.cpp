#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define per(i, a, b) for(int i = (b) - 1; i >= (a); --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

// Input functions

template <typename T> void readContainer(vector<T>& container) { int n; cin >> n; container.resize(n); for (auto& x : container) cin >> x; }
template <typename T> void readContainer(set<T>& container) { int n; cin >> n; for (int i = 0; i < n; ++i) { T value; cin >> value; container.insert(value); } }
template <typename T> void readContainer(multiset<T>& container) { int n; cin >> n; for (int i = 0; i < n; ++i) { T value; cin >> value; container.insert(value); } }
template <typename K, typename V> void readContainer(map<K, V>& m) { int n; cin >> n; for (int i = 0; i < n; ++i) { K key; V value; cin >> key >> value; m[key] = value; } }
template <typename T> void readContainer(priority_queue<T>& pq) { int n; cin >> n; for (int i = 0; i < n; ++i) { T value; cin >> value; pq.push(value); } }
template <typename T> void readContainer(stack<T>& stk) { int n; cin >> n; for (int i = 0; i < n; ++i) { T value; cin >> value; stk.push(value); } }
template <typename T> void readContainer(queue<T>& q) { int n; cin >> n; for (int i = 0; i < n; ++i) { T value; cin >> value; q.push(value); } }
template <typename T1, typename T2> void readContainer(pair<T1, T2>& p) { cin >> p.first >> p.second; }

// Output functions

template <typename T> void printContainer(const T& container) { cout << "["; for (auto it = container.begin(); it != container.end(); ++it) { if (it != container.begin()) cout << ", "; cout << *it; } cout << "]"; }
template <typename T1, typename T2> void printContainer(const map<T1, T2>& m) { cout << "{"; for (auto it = m.begin(); it != m.end(); ++it) { if (it != m.begin()) cout << ", "; cout << it->first << ":" << it->second; } cout << "}"; }
template <typename T> void printContainer(priority_queue<T> pq) { cout << "["; while (!pq.empty()) { if (pq.size() != sz(pq)) cout << ", "; cout << pq.top(); pq.pop(); } cout << "]"; }
template <typename T> void printContainer(stack<T> stk) { cout << "["; while (!stk.empty()) { if (stk.size() != sz(stk)) cout << ", "; cout << stk.top(); stk.pop(); } cout << "]"; }

void solve() {
    // Your code for solving the problem goes here
    vector<int> temp;
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}