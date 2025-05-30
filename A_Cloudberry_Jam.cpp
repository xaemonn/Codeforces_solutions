#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    ll x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<ll> b(n * 2);
    for (int i = 0; i < 2 * n; i++) b[i] = a[i % n];
    
    ll count = 0, sum = 0;
    int r = 0;
    
    for (int l = 0; l < n * k; l++) {
        while (r < min(n * k, l + n * 2) && sum < x) {
            sum += b[r % (2 * n)];
            r++;
        }
        
        if (sum >= x) count += (n * k - l);
        sum -= b[l % (2 * n)];
    }
    
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
