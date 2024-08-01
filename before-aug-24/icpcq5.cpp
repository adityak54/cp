#include <iostream>
#include <vector>
#include <unordered_set>
#include <stack>

using namespace std;

bool dfs(const vector<vector<int>>& adj_list, int start, int p1, int p2) {
    stack<pair<int, int>> s;
    unordered_set<int> visited;

    s.push({start, -1});

    while (!s.empty()) {
        int current = s.top().first;
        int parent = s.top().second;
        s.pop();

        if (current == p1 || current == p2) {
            return false;
        }

        visited.insert(current);

        for (int neighbor : adj_list[current]) {
            if (neighbor != parent && visited.find(neighbor) == visited.end()) {
                s.push({neighbor, current});
            }
        }
    }

    return true;
}

char find_winner(const vector<vector<int>>& adj_list, const vector<int>& positions) {
    int a = positions[0];
    int b = positions[1];
    int c = positions[2];

    bool a_wins = dfs(adj_list, a, b, c);
    bool b_wins = dfs(adj_list, b, a, c);
    bool c_wins = dfs(adj_list, c, a, b);

    if (a_wins) {
        return 'A';
    } else if (b_wins) {
        return 'B';
    } else if (c_wins) {
        return 'C';
    } else {
        return 'D';  // 'D' stands for DRAW
    }
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        vector<int> positions(3);
        for (int i = 0; i < 3; ++i) {
            cin >> positions[i];
        }

        vector<vector<int>> adj_list(N + 1);
        for (int i = 0; i < N - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }

        char winner = find_winner(adj_list, positions);
        cout << winner << endl;
    }

    return 0;
}