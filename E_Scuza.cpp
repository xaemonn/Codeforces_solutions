#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,q;
    cin >> n>>q;
    vector<int> v(n),que(q);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    for (int i = 0; i < q;i++){
        cin >> que[i];
    }

    vector<int> maxi(n);
    maxi[0] = v[0];
    for (int i = 1;i<n;i++){
        maxi[i] = max(maxi[i - 1], v[i]);
    }

    vector<long long> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n;i++){
        pref[i] = v[i] + pref[i - 1];
    }

    vector<long long> ans;

    for (int i = 0; i < q;i++){
        int val = que[i];
        auto it = upper_bound(maxi.begin(),maxi.end(), val);
        if(it==maxi.begin()){
            ans.push_back(0);
        }else{
            ans.push_back(pref[it - maxi.begin() - 1]);
        }
       
    }

    for (int i = 0; i < q;i++){
        cout << ans[i] << " ";
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
