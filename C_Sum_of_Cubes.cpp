#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

set<ll> st;
const ll num = 10000;

void compute(ll num){
    for (int i = 1; i <= num;i++){
        st.insert(1LL*i * i * i);
    }
}


void solve() {
    
   
        ll n;
        cin >> n;

        for (ll i = 1; i * i * i <= n;i++){
            if(st.count(n-(i*i*i))){
                cout << "YES" << endl;
                return;
            }
        }

        cout <<"NO"<< endl;
    }

    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    compute(num);
    int t;
    cin >> t;
    while(t--){ solve();}
    
    return 0;
}