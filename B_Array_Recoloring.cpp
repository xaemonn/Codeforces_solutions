#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve() {
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];

    }

    if(k==1){
        int ans = INT_MIN;
        for (int i = 0; i < n - 1; i++){
            ans = max(ans, v[i] + v[n - 1]);
        }
        for (int i = 1; i < n ; i++){
            ans = max(ans, v[i] + v[0]);
        }

        cout << ans << endl;
        return;
    }else{
        sort(v.begin(), v.end(), greater<int>());
        ll sum = 0;
        for (int i = 0; i < k + 1; i++){
            sum += v[i];
        }

        cout << sum << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
