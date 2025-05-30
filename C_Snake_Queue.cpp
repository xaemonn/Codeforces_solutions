#include <bits/stdc++.h>
using namespace std;

void solve() {
    int Q;
    cin >> Q;

    deque<long long> dq; 
    vector<long long> res;
    vector<long long> sz;
    int j = 0;
    long long minus = 0;
    dq.push_back(0);
    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long l;
            cin >> l;
            if (!dq.empty()) {
                dq.push_back(dq.back() + l); 
            } else {
                dq.push_back(l);
                
            }
            sz.push_back(l);
        } else if (type == 2) {
            if (!dq.empty()) {
                minus += sz[j];
                j++;
                dq.pop_front(); 
            }
        } else if (type == 3) {
            int k;
            cin >> k;
            res.push_back(dq[k - 1] - minus); 
        }
    }

    for (long long x : res) {
        cout << x << endl;
    }
}

int main() {
    solve();
    return 0;
}
