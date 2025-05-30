#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll row(ll m, ll len){
    if(len>=m)
        return m;

    ll first = (m + 1) / (len + 1);

    ll ppl = first * len;

    ll left = m - first;

    return max(ppl,left);
}


void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        ll low = 1;
        ll high = m;
        while(low<high){
            ll mid = low + (high - low) / 2;
            ll num = n * row(m, mid);
            if(num>=k){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        cout << low << endl;
        }

        
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}