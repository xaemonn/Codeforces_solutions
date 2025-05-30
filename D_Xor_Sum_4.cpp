#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define MOD 1000000007

void solve() {
    long long n;
    cin >> n ;

    vector<long long> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    vector<long long> frq(64); 

    for (int j = 0; j < 64;j++){
        for (int i = 0; i < n; i++){
            if((v[i]>>j) &1)
                {frq[j]++;}
        }
    } 

    long long ans = 0;

   

    for (int i = 0; i < 64; i++){
        long long frq0 = n - frq[i];
        long long frq1 = frq[i] ; 

        long long total = (frq1 * frq0)% MOD;

        long long num = (1LL << i)%MOD;

        ans = (ans%MOD + (total * num) % MOD)%MOD;
    }

        
    cout << ans << endl;
}

int main() {
    
        solve();
    
}
