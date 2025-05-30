#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;



void solve()
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long common = (x * y) / __gcd(x, y);
        long long minus = (n) / common;
        long long add = n / x;
        add = add - minus;
        long long sub = n / y;
        sub = sub - minus;

        long long ans = ((n * (n + 1)) / 2)- ((sub*(sub+1))/2)- (((n-add)*(n-add+1))/2);

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