#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;



void solve(){
    int n, q;
    cin >> n;
    vi v(n);
    
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    cin >> q;
    vi test(q);
    for (int i = 0; i < q;i++){
        cin >> test[i];
    }
    sort(v.begin(), v.end());

    vi ans;
    for (int i = 0; i < q; i++){
        int num = test[i];
        auto it = upper_bound(v.begin(), v.end(), num);
        int l = it - v.begin();
        ans.push_back(l);
    }

    for(int i:ans){
        cout << i << endl;
    }
}

int main(){
    solve();
}