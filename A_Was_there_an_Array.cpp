#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n-2);
    for(int i = 0; i < n-2; i++) {
        cin >> b[i];
    }
    
    // We'll construct array 'a' of size n
    vector<int> a(n);
    a[0] = 1;  // Start with 1
    a[1] = 1;  // Initially assume equal to first
    
    // For each position i+2, we need to satisfy b[i]
    for(int i = 0; i < n-2; i++) {
        if(b[i] == 1) {
            // Must be equal to both neighbors
            a[i+2] = a[i+1];
        } else {
            // Must be different from at least one neighbor
            if(i > 0 && b[i-1] == 1) {
                // If previous position needed equality, we must differ from next
                a[i+2] = a[i+1] + 1;
            } else {
                // We can differ from previous
                a[i+2] = (a[i+1] == 1) ? 2 : 1;
            }
        }
        
        // Verify current position satisfies both current and previous b[i]
        bool valid = true;
        if(i >= 0) {
            bool equal_curr = (a[i+2] == a[i+1] && a[i+2] == a[i]);
            if((b[i] == 1 && !equal_curr) || (b[i] == 0 && equal_curr)) {
                valid = false;
            }
        }
        
        if(!valid) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}