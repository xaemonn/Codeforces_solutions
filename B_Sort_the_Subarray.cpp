#include <bits/stdc++.h>
using namespace std;



void solve() {
    long long n;
    cin >> n ;

    vector<long long> a(n),b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int l = 0;
    int r = n - 1;
    while( l<n-1 && a[l]==b[l] )
        l++;
    

    while( r>0 && a[r]==b[r])
        r--;
    

    while(l>0 && b[l-1]<=b[l]){
        l--;
    }
    while(r<n-1 && b[r+1]>=b[r]){
        r++;
    }
    cout << l + 1 << " " << r + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
