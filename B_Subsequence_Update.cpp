#include <bits/stdc++.h>
using namespace std;


void solve() {

    int n,l,r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    

    int nums = r-l+1;
    sort(v.begin(), v.begin() + l);
    sort(v.begin()+l, v.begin() + r);
    sort(v.begin()+r, v.end());

    int cnt = 0;
    long long sum = 0;
    for (int i = l-1; i<r;i++){
        sum += v[i];
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
