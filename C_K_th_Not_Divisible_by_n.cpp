#include <bits/stdc++.h>
using namespace std;

typedef long long ll;





void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;

        ll num = (x - 1) / (n - 1);  //multiples of n to be skipped
        cout << num + x << endl;
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}