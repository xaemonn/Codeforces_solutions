#include<bits/stdc++.h>
using namespace std;

const int maxx = 1e7;
vector<int> spf(maxx + 1); 
vector<int> arr(maxx + 1);


void sieve() {
    for (int i = 1; i <= maxx; i++) spf[i] = i;
    for (int i = 2; i * i <= maxx; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= maxx; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}


bool prime(int x) {
    return x > 1 && spf[x] == x;
}


void func() {
    sieve();
    for (int a = 1; a <= maxx; a++) {
        for (int b = 2 * a; b <= maxx; b += a) {
            int gcd_ab = a;
            int lcm_ab = b;
            int F = lcm_ab / gcd_ab;
            if (prime(F)) {
                arr[b]++;
            }
        }
    }
    for (int i = 1; i <= maxx; i++) {
        arr[i] += arr[i - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    func();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }
    return 0;
}
