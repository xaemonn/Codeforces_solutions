#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend()); 
    
    int teams = 0;
    ll curr = 0;
    for (int i = 0; i < n; i++) {
        curr++;
        if (a[i] * curr >= x) {
            teams++;
            curr = 0;
        }
    }
    cout << teams << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}