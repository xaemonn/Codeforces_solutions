#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b&& b==c){
        cout << "Yes" << endl;
        return;
    }
    if( a+b==c || b+c==a || a+c==b){
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
        return;
}

int main() {
    
    
       solve();
}