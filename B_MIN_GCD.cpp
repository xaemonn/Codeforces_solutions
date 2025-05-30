#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve(){
    int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n;i++)
           {
               cin >> v[i];}

           ll mini = v[0];
           for (int i = 1; i < n;i++){
            if(v[i]<mini){
                mini = v[i];
            }
           }

           ll cnt = 0;
           for (int i = 0; i < n;i++){
              if(v[i]==mini){
                  cnt++;
              }
           }

           vector<ll> div;
           vector<ll> mins;
           ll total = 0;

           for (int i = 0; i < n;i++){
            if(v[i]%mini==0 && v[i]!=mini){
                div.push_back(v[i]);
               
                total++;
            }
           }

           ll gcddd = div[0];
           for (int i = 1; i < total; i++){
               gcddd = gcd(gcddd, div[i]);
           }

           if(gcddd==mini){
               cout << "YES" << endl;
               return;
           }

           if(total<2){
               cout << "NO" << endl;
               return;
           }

            cout << "NO" << endl;
            
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
