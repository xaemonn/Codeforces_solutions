#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    

    string S;
    cin >> S;
    int n = S.size();
    vector<int> d(n);
    for(int i = 0; i < n; i++) d[i] = S[i] - '0';

    ll ans = LLONG_MAX;
    // try each possible total_B mod 10 = r
    for(int r = 0; r < 10; r++){
        // curr = minimal #B presses before current A
        ll curr = 0;
        for(int i = 0; i < n; i++){
            // we need (T - b_i) mod10 == d[i]
            // i.e. b_i ≡ (T - d[i]) mod10 ≡ (r - d[i]) mod10
            int need = (r - d[i]) % 10;
            if(need < 0) need += 10;
            if(curr <= need){
                curr = need;
            } else {
                // raise need by multiples of 10 until >= curr
                ll k = (curr - need + 9) / 10;
                curr = need + k * 10;
            }
        }
        // now curr = required b_n; total Bs T must be >= curr and T ≡ r mod 10
        ll T;
        if(curr <= r){
            T = r;
        } else {
            ll k = (curr - r + 9) / 10;
            T = r + k * 10;
        }
        ans = min(ans, T + n);
    }

    cout << ans << "\n";
    return 0;
}
