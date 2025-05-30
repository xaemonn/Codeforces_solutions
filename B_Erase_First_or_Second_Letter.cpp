#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long cnt = 0;
    set<char> st;
    for (int i = 0; i < n;i++){
        st.insert(s[i]);
        cnt += st.size();
    }

    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
