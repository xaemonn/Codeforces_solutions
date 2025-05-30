#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int n,tow,x;
    cin >> n>>tow>>x;
    vector<int> v(n);

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

   // v.begin(), v.end();

    set<pair<int,int>> st;

    vector<int> ans(n);
    for (int i = 0; i < tow;i++){
        st.insert({0, i + 1});
        
    }

        

    for (int i =0 ; i<n;i++){
        auto it = *st.begin();
        st.erase(st.begin());
        st.insert({it.first + v[i], it.second});
        ans[i] = it.second;
    }

     cout << "YES" << endl;
    
    for (int i = 0; i < n ;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}