#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(m); 
    vector<long long> q(k); 

    for (long long i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < k; i++) {
        cin >> q[i];
    }

    
    if (n - k > 1) {
        
        for (long long i = 0; i < m; i++) {
            cout << "0";
        }
        cout << endl;
        return;
    }

    if (n == k) {
       
        for (long long i = 0; i < m; i++) {
            cout << "1";
        }
        cout << endl;
        return;
    }

    
    unordered_set<long long> known_questions(q.begin(), q.end());

   
    for (long long i = 0; i < m; i++) {
        if (known_questions.find(a[i]) == known_questions.end()) {
            cout << "1"; 
        } else {
            cout << "0";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
