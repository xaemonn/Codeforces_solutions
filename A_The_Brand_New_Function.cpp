#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;

    for (int i = 0; i < n;i++){
        cin >> v[i];
        st.insert(v[i]);
    }

    vector<int> pref(n);
    for (int i = 0; i < n-1;i++){
        int num = v[i] | v[i + 1];
        st.insert(num);
    }
    pref[0] = v[0];

    for (int i = 1; i < n;i++){
        pref[i] = ( v[i] | pref[i-1]) ;
        st.insert(pref[i]);
    }

    cout << st.size() << endl;
}


int main() {
    
        solve();
    
}
