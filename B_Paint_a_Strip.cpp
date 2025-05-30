#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1" << endl;
        
    } else if (n <= 4) {
        cout << "2" << endl;
       
    } else{
        int range = 4;
        int cnt = 2;
        while(range<n){
            cnt++;
            range = (range + 1) * 2;
        }
        cout << cnt << endl;
    }

    
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
