#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int ans = 4 * m * n;

    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if(i==0){
            continue;
        }
        ans -= 2 * (m - x + m - y);
    }

    


    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
