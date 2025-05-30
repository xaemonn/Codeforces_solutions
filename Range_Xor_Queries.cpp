#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
void solve(){
     ll n;
    cin >> n;

    ll x;
    cin >> x;

    vector<ll> v(n);
    for (ll i = 0; i < n;i++){
        cin >> v[i];
    }

    vector<ll> p(n + 1, 0);
    

    for (ll i = 1; i <= n;i++){
        p[i] = p[i - 1] ^ v[i - 1];
    }

    vector<ll> ans(x);
    for (int i = 0; i < x;i++){
        int st;
        int end;
        cin >> st;
        cin >> end;
        ans[i] = p[end] ^ p[st - 1];
    }

    for (int i = 0; i<x;i++){
        cout << ans[i] << endl;
    }
}

int main(){
   
        solve();
        
}