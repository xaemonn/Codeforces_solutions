#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
 int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        
    }
    for (int i = 0; i < n/2;i++){
        int num =abs(a[i]- a[n - i - 1]);
        ans = __gcd(ans, num);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}