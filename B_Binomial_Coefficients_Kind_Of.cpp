#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;


long long power(int k) {
    long long result = 1; 
    long long base = 2;   

    while (k > 0) {
        if (k % 2 == 1) { 
            result = (result * base) % MOD; 
        }
        base = (base * base) % MOD; 
        k /= 2; 
    }

    return result; 
}

int main() {
    int t;
    cin >> t;
    vector<int> n(t);
    vector<int> k(t);
    
    for (int i = 0; i < t; i++) {
        cin >> n[i]; 
    }
    
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }

    for (int i = 0; i < t; i++) {
        int val = k[i];
        long long num = power(val); 
        cout << num << endl; 
    }
}
