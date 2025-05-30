#include <bits/stdc++.h>
using namespace std;

void solve(){
   
    int X, Y, K;
    cin >> X >> Y >> K;

    if (X >= K) {
        cout << 0 << " " << 0 << " " << K << " " << 0 << endl;  
        
        if (Y >= K) {
            cout << 0 << " " << 0 << " " << 0 << " " << K << endl;  
        } else {
            cout << 1 << " " << 0 << " " << 1 << " " << Y << endl;  
        }
    }
    
    else if (Y >= K) {
        cout << 0 << " " << 0 << " " << 0 << " " << K << endl;  
        
        if (X >= K) {
            cout << 0 << " " << 0 << " " << K << " " << 0 << endl;  
        } else {
            cout << 0 << " " << 1 << " " << X << " " << 1 << endl;  
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}