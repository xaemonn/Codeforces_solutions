#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    int k;
    cin >> k;
    vector<long long> q(k);
    for (int i = 0; i < k;i++){
        cin >> q[i];
    }

    vector<long long> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n;i++){
        pref[i] = pref[i - 1] + v[i];
    }

    vector<int> ans(k);

    for (int i = 0; i < k;i++){
        auto it = lower_bound(pref.begin(), pref.end(), q[i]);
          ans[i] = it - pref.begin();
    }

    for (int i = 0; i < k;i++){
        cout << ans[i]+1 << endl;
    }
}