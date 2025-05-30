#include <bits/stdc++.h>
using namespace std;

typedef long long ll;




void solve() {
    
   
        ll n,a,b;
        cin >> n>>a>>b;
        
        
        vector<ll> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n;i++){
            int left = a - v[i];
            int right = b - v[i];
            auto low = lower_bound(v.begin() + i+1, v.end(),left)-v.begin();
            auto high = upper_bound(v.begin() + i+1, v.end(),right)-v.begin();

            ans += (high - low);
        }

        cout << ans << endl;
    }

    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {solve();}
    
    return 0;
}