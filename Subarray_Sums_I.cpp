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
    map<ll, ll> mp;

    for (ll i = 1; i <= n;i++){
        p[i] = p[i - 1] + v[i - 1];
    }

    ll cnt = 0;
    for (ll i = 0; i <= n;i++){
        ll req=p[i]-x;
        if(mp[req]>0){
            cnt += mp[req];
        }
        mp[p[i]]++;
    }

    cout << cnt << endl;
}

int main(){
   
        solve();
        
}