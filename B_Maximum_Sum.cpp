#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<long long> pref(n + 1);
    pref[0] = 0;
    for (int i = 1; i <=n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }

    long long maxi = LLONG_MIN;
    for (int m = 0; m <= k; m++){
        maxi = max(maxi, pref[(n - (k - m))] - pref[2*m]);
    }

    cout << maxi << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
