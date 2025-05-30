#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long cycle_distance = a + b + c;
    long long full_cycles = n / cycle_distance;
    long long dist_covered = full_cycles * cycle_distance;
    long long days = full_cycles * 3;

    
    if (dist_covered < n) {
        if (dist_covered + a >= n) {
            days++;
        } else if (dist_covered + a + b >= n) {
            days += 2;
        } else {
            days += 3;
        }
    }

    cout << days << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
