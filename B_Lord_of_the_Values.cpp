#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve() {
    
   
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        cout << n * 3 << endl;
        for (int i = 0; i < n;i+=2){
            cout << 1 << " " << i+1 << " " << i + 2 << endl;
            cout << 2 << " " << i+1 << " " << i + 2 << endl;
            cout << 1 << " " << i+1 << " " << i + 2<< endl;
            cout << 2 << " " << i+1 << " " << i + 2<< endl;
            cout << 1 << " " << i+1 << " " << i + 2<< endl;
            cout << 2<< " " << i +1<< " " << i + 2 << endl;
        }
    }

    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {solve();}
    
    return 0;
}