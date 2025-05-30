#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_beautiful(int n, vector<vector<int>>& h, vector<int>& R, vector<int>& C) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j + 1 < n; ++j) {
            int a = h[i][j] + R[i] + C[j];
            int b = h[i][j+1] + R[i] + C[j+1];
            if (a == b) return false;
        }
    }
    for (int i = 0; i + 1 < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int a = h[i][j] + R[i] + C[j];
            int b = h[i+1][j] + R[i+1] + C[j];
            if (a == b) return false;
        }
    }
    return true;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> h(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> h[i][j];

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int ans = LLONG_MAX;

        // Try all 4 parity combinations for R[i] and C[j]
        for (int row_parity = 0; row_parity <= 1; ++row_parity) {
            for (int col_parity = 0; col_parity <= 1; ++col_parity) {
                vector<int> R(n), C(n);
                int cost = 0;

                for (int i = 0; i < n; ++i) {
                    R[i] = row_parity;
                    if (R[i]) cost += a[i];
                }

                for (int j = 0; j < n; ++j) {
                    C[j] = col_parity;
                    if (C[j]) cost += b[j];
                }

                if (is_beautiful(n, h, R, C)) {
                    ans = min(ans, cost);
                }
            }
        }

        cout << (ans == LLONG_MAX ? -1 : ans) << '\n';
    }

    return 0;
}
