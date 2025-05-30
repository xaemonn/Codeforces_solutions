#include <bits/stdc++.h>
using namespace std;

long long cnt(vector<pair<long long, long long>> &v, long long mid, long long k) {
    long long neg = 0, total = 0;

    for (auto &it : v) {
        if (mid <= it.first) {
            total += mid; // Positive review
        } else if (mid <= it.second) {
            total+= mid; // Negative review
            neg++;
        }
    }

   
    if (neg> k) return -1;

    return total;
}

void solve() {
    long long n, k;
    cin >> n >> k;

    vector<pair<long long, long long>> v(n);

    for (long long i = 0; i < n; i++) {
        cin >> v[i].first;
    }
    for (long long i = 0; i < n; i++) {
        cin >> v[i].second;
    }

   
    sort(v.begin(), v.end());

   long long low = LLONG_MAX;
    long long high= LLONG_MIN;

   
    for (const auto &p : v) {
        low= min(low, p.first); 
        high= max(high, p.second); 
    }
    long long res = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long earn= cnt(v, mid, k);

        if (earn != -1) { 
            res = max(res, earn);
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
