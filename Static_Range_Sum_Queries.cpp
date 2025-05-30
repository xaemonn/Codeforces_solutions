#include <bits/stdc++.h>
using namespace std;

typedef long long ll;




void solve() {
    
   
        ll n,q;
        cin >> n>>q;
        
        
        vector<ll> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }

        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n;i++){
            pref[i] = pref[i - 1] + v[i-1];
        }

        for (int i = 0; i < q;i++){
            int l, r;
            cin >> l;
            cin >> r;

            cout << pref[r] - pref[l - 1] << endl;
        }
    }

    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    solve();
    
    return 0;
}