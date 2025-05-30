#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (m > n) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<vector<int>> v(2 * n, (vector<int>(m, 0)));

        for (int i = 0; i < 2 * n; i++) {
            for (int j = 0; j < m; j++) {
                v[i][j]=
            }
            cout << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
