#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void solve() {
    long long n,k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    vector<long long> frq(40); 

    for (int i = 0; i < n;i++){
        for (int j = 0; j < 40; j++){
            if( (v[i]>>j)&1)
                frq[j]++;
        }
    }

    long long ans = 0;

    for (int i = 39; i >= 0; i--){
         if(frq[i]>=n-frq[i]){
             ans = ans << 1;
         }
         else{
             ans = ans << 1;
             ans++;
             long long temp = ans;
             if((temp<<i)>k){
                 ans--;
             }
         }

    }

    long long res = 0;

    for (int i = 0; i < n;i++)
    {
        res += ans ^ v[i];
    }
    cout << res << endl;
}

int main() {
    
        solve();
    
}
