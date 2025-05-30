#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> a(n),b(n),c(n);
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        a[i] = { num,i};
    }
     for (int i = 0; i < n;i++){
       int num;
        cin >> num;
        b[i] = {num,i};
    }
     for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        c[i] = {num,i};
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int ans = -1;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            for (int k = 0; k < 3; k++){
                if(a[i].second!=b[j].second && b[j].second!=c[k].second && a[i].second!=c[k].second ){
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}