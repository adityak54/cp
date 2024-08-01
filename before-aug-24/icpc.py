MOD = 10**9 + 7

def calculate_probability(N, b, w, x):
    dp = [[[[0] * 11 for _ in range(61)] for _ in range(151)] for _ in range(2)]

    dp[0][0][b][w] = 1

    for i in range(N + 1):
        for j in range(b + 1):
            for k in range(11):
                for l in range(w + 1):
                    for m in range(2):
                        if dp[m][i][j][k] > 0:
                            # Virat scores 1, 2, 3, 4, or 6 runs
                            for run in [1, 2, 3, 4, 6]:
                                if j >= run:
                                    new_m = m
                                    new_i = i + run
                                    new_j = j - run
                                    new_k = min(k, new_i)
                                    new_l = l + (run % 2 == 1)
                                    new_w = w - (run % 2 == 1)

                                    dp[new_m][new_i][new_j][new_k] = (dp[new_m][new_i][new_j][new_k] + dp[m][i][j][k]) % MOD

                                    if new_i >= N and new_w == 0:
                                        dp[new_m][new_i][new_j][new_k] = (dp[new_m][new_i][new_j][new_k] + dp[m][i][j][k]) % MOD

                            # Virat gets out
                            if m == 0:
                                new_m = 1
                                new_i = i
                                new_j = j
                                new_k = k
                                new_l = l
                                new_w = w - 1

                                dp[new_m][new_i][new_j][new_k] = (dp[new_m][new_i][new_j][new_k] + dp[m][i][j][k]) % MOD

                                if new_i >= N and new_w == 0:
                                    dp[new_m][new_i][new_j][new_k] = (dp[new_m][new_i][new_j][new_k] + dp[m][i][j][k]) % MOD

    total_ways = 0
    winning_ways = 0

    for i in range(2):
        for j in range(b + 1):
            for k in range(11):
                if i == 1 or k == 0:
                    total_ways = (total_ways + dp[i][N][j][k]) % MOD
                    if i == 1:
                        winning_ways = (winning_ways + dp[i][N][j][k]) % MOD

    if total_ways == 0:
        return 0

    inv_total_ways = pow(total_ways, MOD - 2, MOD)
    result = (winning_ways * pow(inv_total_ways, 2, MOD)) % MOD

    return result

# Input reading and processing
T = int(input())
for _ in range(T):
    N, b, w, x = map(int, input().split())

    # Calculate and print the probability
    result = calculate_probability(N, b, w, x)
    print(result)
