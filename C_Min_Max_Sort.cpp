#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    if(is_sorted(v.begin(),v.end())){
        cout << 0 << endl;
        return;
    }

    if(n==3){
        cout << 1 << endl;
        return;
    }
    int st, end;
    if(n%2){
        st = n / 2;
        end = st + 2;
    }else{
        st = n / 2;
        end = st + 1;
    }

        int i = 0;
        int j = n - 1;

        int ops = n / 2;

       

        cout << ops << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
