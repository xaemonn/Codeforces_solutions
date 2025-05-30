#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int calc(int n) {
    return n * (n - 1) / 2;
}

void solve() {
    int n;
    cin >> n;

    int sz = calc(n);
    vector<int> v(sz);
    

    for (int i = 0; i < sz; i++) {
        cin >> v[i];
       
    }

    

    sort(v.begin(), v.end());

    

    for (int i = 0; i < sz; i+=--n)
    {
        cout << v[i] << " ";
    }
    cout <<1000000000<< endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
