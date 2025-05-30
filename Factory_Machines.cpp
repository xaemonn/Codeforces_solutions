#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n); // Use long long for machine times
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long low = 1;
    long long high = 1LL * k * (*max_element(v.begin(), v.end())); // Correct initialization
    long long ans = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long cnt = 0;

        for (int i = 0; i < n; i++) {
            cnt += (mid / v[i]);
            if (cnt >= k) break; // Stop early if already sufficient
        }

        if (cnt >= k) {
            ans = mid; // Store the potential answer
            high = mid - 1; // Look for a smaller time
        } else {
            low = mid + 1; // Increase time
        }
    }

    cout << ans << endl;
    return 0;
}
