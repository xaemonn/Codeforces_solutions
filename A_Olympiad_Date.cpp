#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
void solve(){
     ll n;
    cin >> n;

   

    vector<ll> v(n);
    for (ll i = 0; i < n;i++){
        cin >> v[i];
    }

    int cnt = 0;
    map<int, int> mp;

    for (int i = 0; i < n;i++){
        mp[v[i]]++;
        cnt++;
        if(mp[0]>=3 && mp[1]>=1 && mp[3]>=1 && mp[2]>=2 && mp[5]>=1){
            cout << cnt << endl;
            return;
        }
    }

    cout << 0 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {solve();}
        
}