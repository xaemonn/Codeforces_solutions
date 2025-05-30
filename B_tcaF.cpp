#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long int fact(int x){
    if(x==1)
        return 1;
    return x * fact(x - 1);
}

map<int, long long int> mp;

void solve() {
    long long int n;
    cin >> n;
    for(auto it:mp){
        if(it.second==n){
            cout << it.first << endl;
        }
    }
}

int main() {
    
    for (int i = 1; i <= 20; i++){
        mp[i] = fact(i);
    }
        solve();
    return 0;
}
