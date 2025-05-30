#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(n+1);
    

    for (int i = 0; i < n; i++) {
      v[i+1]=s[i]-'0';
      
    }

    long long cnt = 0;

    for (int i = 1; i <= n;i++){
        for (int j = 1; i * j <= n && v[i*j]!=1 ;j++){
            if(v[i*j]==0)cnt += i;
            v[i * j] = 2;
        }
    }

        cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
