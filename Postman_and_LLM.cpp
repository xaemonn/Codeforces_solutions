#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

const int MOD = 998244353;

// Function to solve each test case
void solve() {
    ll n, req;
    cin >> n >> req;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort the array
    sort(a.begin(), a.end());

    // Step 2: Calculate edge differences
    vl edges;
    for (int i = 1; i < n; i++) {
        edges.push_back(a[i] - a[i - 1]);
    }

    // Special case when `req == 1`
    if (req == 1) {
        ll sz = a.size();
        cout << "0 " << sz << endl;
        return;
    }

    // Sliding window approach to find minimum sum of differences
    ll l = 0, curr_sum = 0, min_sum = LLONG_MAX, count_min = 0;
    for (ll r = 0; r < req - 1; r++) {
        curr_sum += edges[r];  // Initialize the sum for the first window
    }

    for (ll r = req - 1; r < n - 1; r++) {
        curr_sum += edges[r];  // Add the next element to the window

        // Check if the current sum is the minimum
        if (curr_sum < min_sum) {
            min_sum = curr_sum;
            count_min = 1;  // Reset count
        } else if (curr_sum == min_sum) {
            count_min++;  // Increment count if equal to minimum
        }

        // Slide the window to the right
        curr_sum -= edges[l];
        l++;
    }

    // Output the minimum cost and its count modulo 998244353
    ll pr = count_min % MOD;
    cout << (min_sum * req) << " " << pr << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
