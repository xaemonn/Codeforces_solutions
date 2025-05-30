#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    set<int> st;
    for (int i = 0; i < n;i++){
        if(st.count(v[i])){
            cout << "1" << endl;
            cout << v[i] << endl;
            return;
        }
        st.insert(v[i]);
    }
    cout << "-1" << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}