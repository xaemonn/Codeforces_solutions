#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> v(4);
    for (int i = 0; i < 4; i++){
        cin >> v[i];
    }

    vector<int> a(5), b(5);
    a[0] = v[0];
    a[1] = v[1];
    a[3] = v[2];
    a[4] = v[3];

    b[0] = v[0];
    b[1] = v[1];
    b[3] = v[2];
    b[4] = v[3];

    a[2] = a[0] + a[1];
    b[2] = b[4] - b[3];

    int ans1 = 0;
    int ans2 = 0;
    for (int i = 2; i < 5; i++){
        if(a[i]==a[i-1]+a[i-2]){
            ans1++;
        }
    }
     for (int i = 2; i < 5; i++){
        if(b[i]==b[i-1]+b[i-2]){
            ans2++;
        }
    }
    cout << max(ans1, ans2) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}