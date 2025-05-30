#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,k;
    cin >> n>>k;

    
    vector<int> v(n);
    

    for (int i = 0; i < n; i++) {
        cin >> v[i];
       
    }

    vector<int> max1(k,0), max2(k,0);
    int ans = INT_MAX;
    vector<int> last(k, -1);

    for (int i = 0; i < n;i++){
        int step = i - last[v[i] - 1];
        if(step>max1[v[i]-1]){
            max2[v[i]-1] = max1[v[i]-1];
            max1[v[i]-1] = step;
        }else if(step>max2[v[i]-1]){
            max2[v[i] - 1] = step;
        }
        last[v[i] - 1] = i;
    }

    for (int i = 0; i < k;i++){
        int step = n - last[i];
        if(step>max1[i]){
            max2[i] = max1[i];
            max1[i] = step;
        }else if(step>max2[i]){
            max2[i] = step;
        }
    }

    for (int i = 0; i < k;i++){
        int maxi = max((max1[i] + 1) / 2, max2[i]);
        ans = min(maxi, ans);
    }

        cout << ans-1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
