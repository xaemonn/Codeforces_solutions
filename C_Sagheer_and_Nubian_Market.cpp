#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long>& c, long long num,int m) {
    int n = c.size();
    vector<long long> v(n);
    for (int i = 0; i < n;i++){
        v[i] = c[i] + num * (i + 1) * 1LL;
    }
    sort(v.begin(), v.end());

    long long total = 0;
    for (int i = 0; i < num;i++){
        total += v[i];
    }
    if(total<=m){
        return true;
    }
    return false;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> c(n);
   

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    long long low = 0;
    long long high = n + 1;
    long long ans = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(c,mid,m)) {
            ans = mid;
            low = mid + 1;
        } else {
            high=mid- 1;
        }
    }
    vector<long long> final(n);
    long long cost = 0;
    for (int i = 0; i < n;i++){
        final[i] = c[i] + (i + 1) * ans * 1LL;
    }
    sort(final.begin(), final.end());
    for (int i = 0; i < ans; i++){
        cost += final[i];
    }
    cout << ans << " " << cost << endl;
}

int main() {
    solve();
    return 0;
}