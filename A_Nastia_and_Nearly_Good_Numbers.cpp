#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int a,b;
    cin >> a>>b;

    if(b==1){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    cout << (long long) a * b << " " << (long long) a << " " << a * (long long) (b + 1) << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}