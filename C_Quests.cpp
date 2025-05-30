#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void solve() {
    int n, k;
    cin >> n >> k;

    vi a(n);
    vi b(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }

    long long ans = 0;
    long long temp = 0;
    int maxb = 0;

    for (int i = 0; i <n && i<k; i++){
        temp += a[i];
        maxb = (b[i] > maxb) ? b[i] : maxb;
        long long test = temp + (k - i - 1) * maxb;
        ans = max(ans, test);
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
