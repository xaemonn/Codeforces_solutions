#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
        
        int tot = n * m;
        int ans = tot;

        for (int row : {1, -1}) {
            for (int col : {1, -1}) {
               map<int, int> mp;
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < m; ++j) {
                        int num = v[i][j] - (row * i + col * j);
                        mp[num]++;
                    }
                }
                int maxii = 0;
                for (const auto& it : mp) {
                    int key = it.first;
                    int val = it.second;
                    maxii = max(maxii, val);
                }
                ans = min(ans, tot - maxii);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
