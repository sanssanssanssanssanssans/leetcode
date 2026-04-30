
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define sz(x) (int)x.size()

class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        // dp[i][j][c] = 해당 칸까지 cost = c로 왔을 때, 최대 score임;
        int n = sz(grid), m = sz(grid[0]);
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k + 1, -1)));
        int cost_0 = (grid[0][0] == 0 ? 0 : 1);
        if (cost_0 <= k) dp[0][0][cost_0] = grid[0][0];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int c = 0; c <= k; c++) {
                    if (dp[i][j][c] == -1) continue;
                    int cur = dp[i][j][c];
                    if (i + 1 < n) {
                        int nc = c + (grid[i + 1][j] == 0 ? 0 : 1);
                        if (nc <= k) dp[i + 1][j][nc] = max(dp[i + 1][j][nc], cur + grid[i + 1][j]);
                    }
                    if (j + 1 < m) {
                        int nc = c + (grid[i][j + 1] == 0 ? 0 : 1);
                        if (nc <= k) dp[i][j + 1][nc] = max(dp[i][j + 1][nc], cur + grid[i][j + 1]);
                    }
                }
            }
        }
        int result = -1;
        for (int c = 0; c <= k; c++) {
            result = max(result, dp[n - 1][m - 1][c]);
        }
        return result;
    }
};

// for the debug

