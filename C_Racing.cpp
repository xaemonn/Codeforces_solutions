#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<ll> d(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    vector<ll> l(n + 1), r(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
    }

    bool poss = true;
    vector<ll> nl(n + 1), nr(n + 1);
    nl[0] = nr[0] = 0;

    for (int i = 1; i <= n; i++) {
        ll newl, newr;
        if (d[i] == 0) {
            newl = nl[i - 1];
            newr = nr[i - 1];
        } else if (d[i] == 1) {
            newl = nl[i - 1] + 1;
            newr = nr[i - 1] + 1;
        } else {
            newl = nl[i - 1];
            newr = nr[i - 1] + 1;
        }
        nl[i] = max(newl, l[i]);
        nr[i] = min(newr, r[i]);            
        if (nl[i] > nr[i]) {
            poss = false;
            break;
        }
    }
    if (!poss) {
        cout << -1 << endl;
        return;
    }
    ll curr = nr[n];
   
    vector<ll> ans(n + 1);

    for (int i = n; i >= 1; i--) {
        if (d[i] != -1) {
            ans[i] = d[i];
            curr -= ans[i];
           
        } else {
          
            if (curr >= nl[i - 1] && curr <= nr[i - 1]) {
                ans[i] = 0;
               
            }
            
            else if (curr - 1 >= nl[i - 1] && curr - 1 <= nr[i - 1]) {
                ans[i] = 1;
                curr -= 1;
            }
            
        }
    }
    if (!poss || curr != 0) {
        cout << -1 << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
