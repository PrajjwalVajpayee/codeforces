#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        // Initialize the dp table to store the minimum number of groups needed for a subset of numbers.
        // dp[i][j] represents the minimum number of groups needed for the numbers from index i to j (inclusive).
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MAX));

        // Base case: dp[i][i] = 1, since a single number always requires one group.
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        // Fill the dp table using the bottom-up approach.
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                // Try all possible partitions of the current subset.
                for (int k = i; k < i + len - 1; k++) {
                    // Check if the two partitions are compatible.
                    bool compatible = true;
                    for (int j = 1; j <= 31; j++) {
                        // If any two numbers in different partitions have the same j-th bit, they are not compatible.
                        if ((numbers[i] & (1 << j)) == (numbers[k + 1] & (1 << j))) {
                            compatible = false;
                            break;
                        }
                    }

                    if (compatible) {
                        dp[i][i + len - 1] = min(dp[i][i + len - 1], dp[i][k] + dp[k + 1][i + len - 1]);
                    }
                }
            }
        }

        // Print the minimum number of groups needed for all numbers.
        cout << dp[0][n - 1] << endl;
    }

    return 0;
}
