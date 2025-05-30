#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            v[i][j] = num++;
        }
    }

    vector<vector<int>> res(n, vector<int>(m));

    if (m % 2 == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        int half = n / 2;
        int evenRow = 1;  
        int oddRow = 0;  

        for (int i = 0; i < half; i++) {
            res[evenRow] = v[i];
            evenRow += 2;
        }

        for (int i = half; i < n; i++) {
            res[oddRow] = v[i];
            oddRow += 2;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
