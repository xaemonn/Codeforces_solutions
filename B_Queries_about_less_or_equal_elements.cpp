#include <bits/stdc++.h>
using namespace std;

typedef long long ll;




void solve() {
    
   
        ll a,b;
        cin>>a>>b;
        
        
        vector<ll> v1(a),v2(b);
        for (int i = 0; i < a;i++){
            cin >> v1[i];
        }
        for (int i = 0; i < b;i++){
            cin >> v2[i];
        }

        sort(v1.begin(), v1.end());

        vector<ll> ans;
        for (int i = 0; i < b;i++){
            ll num = v2[i];

            auto x = upper_bound(v1.begin(), v1.end(), num)-v1.begin();
            ans.push_back(x);
        }

        for (int i = 0; i<b;i++)

          {  cout << ans[i] << " ";}

          cout << endl;
    }

    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}