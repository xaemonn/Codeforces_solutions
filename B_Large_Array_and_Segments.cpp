#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    
    for (int i = 1; i <= n; i++) {
        cin >> v[i];

    }

    vector<int> x(n + 1);

    for (int i = 1; i <= n; i++) {cin >> x[i];}

    vector<int> temp(n + 1, 0);

    vector<int> cycle;
    int num = 0;

    for (int i = 1; i <= n;i++){
        if(temp[i]!=0)
            continue;
        num++;

        int curr = i;
        int ans = 0;
        while(temp[curr]==0){
            temp[curr] = num;
            ans++;
            curr = v[curr];
        }

        cycle.push_back(ans);
    }

    vector<bool> a(num + 1, false);

    ll res = 0;

    for (int i = 1; i <= n;i++){
        int idx = x[i];

        int val = temp[idx];
        if(!a[val]){
            a[val] = true;
            res += cycle[val - 1];
        }
        cout << res << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
