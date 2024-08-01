#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int minTimeToReachN(std::vector<int>& positions, std::vector<int>& speeds, int n, int k) {
    std::vector<std::vector<int>> dp(n, std::vector<int>(k + 2, -1));

    for (int remainingChanges = 0; remainingChanges <= k + 1; ++remainingChanges) {
        for (int currentPos = n - 1; currentPos >= 0; --currentPos) {
            if (currentPos == n - 1 && remainingChanges >= 0) {
                dp[currentPos][remainingChanges] = 0;
            } else if (currentPos >= n || remainingChanges < 0) {
                dp[currentPos][remainingChanges] = INT_MAX;
            } else {
                int minTime = INT_MAX;
                for (int nextPos = currentPos + 1; nextPos < n; nextPos++) {
                    int time = speeds[currentPos] * std::abs(positions[currentPos] - positions[nextPos]);
                    int nextTime = dp[nextPos][remainingChanges - (positions[nextPos] < positions[currentPos])];
                    if (nextTime == INT_MAX) {
                        continue;
                    }
                    minTime = minimum(minTime, time + nextTime);
                }
                dp[currentPos][remainingChanges] = minTime;
            }
        }
    }

    return dp[0][k + 1];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> positions(n), speeds(n);
        for (int i = 0; i < n; i++) {
            std::cin >> positions[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> speeds[i];
        }

        int result = minTimeToReachN(positions, speeds, n, k);
        std::cout << result << std::endl;
    }

    return 0;
}