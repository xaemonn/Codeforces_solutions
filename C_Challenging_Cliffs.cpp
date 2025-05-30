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

    sort(v.begin(), v.end());
    int diff = INT_MAX;
    int idx1 = -1;
    int idx2 = -1;
    for (int i = 0; i < n - 1; i++){
        int d = v[i + 1] - v[i];
        if(d<diff){
            idx1 = i;
            idx2 = i + 1;
            diff = d;
        }
    }

    cout << v[idx1]<<" ";

    for (int i = idx1 + 2; i < n;i++){
        cout << v[i] << " ";
    }

    for (int i = 0; i < idx1;i++){
        cout << v[i] << " ";
    }

    cout << v[idx2] << endl;
    ;

    //(b + 1) << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}