#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, m, p, q;
        cin>> n>>m>>p>>q;
        if (n % p != 0) {
            cout << "YES"<<endl;
        } else {
            long long k = n / p;
            if (m == k * q)
                cout << "YES" << endl;
            else cout << "NO"<<endl;
        }
}
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
