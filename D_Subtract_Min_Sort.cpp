#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++){
        int mini = min(v[i], v[i + 1]);
        v[i] -= mini;
        v[i + 1] -= mini;
    }

    if(is_sorted(v.begin(),v.end())){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
    return 0;
}