#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l, r;
    cin >> l >> r;

    for (int i = 0; i < 63; i++){
        long long num = (1LL << i);   //1 ko i times shift krte jao
        
        if((num&l)==0){
            //bit zero se 1 krdo
            if(num+l<=r){
                l += num;
            }
        }
    }
    cout << l << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
