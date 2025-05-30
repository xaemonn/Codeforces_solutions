#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> p;
            for (int i = 1; i <= n; i++) {
                int num = (2 * i) % n;
                if (num == 0) {
                    p.push_back(n);
                } else {
                    p.push_back(num);
                }
            }
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}