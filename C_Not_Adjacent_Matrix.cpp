#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
     if(n==2){
         cout << -1 << endl;
         return;
     }
    int numO = 1;
    int numE = 2;
    int maxx = (n * n);
    
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(numO<=maxx){
                v[i][j] = numO;
                numO += 2;
            }else{
                v[i][j] = numE;
                numE += 2;
            }
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
       
    }
    return 0;
}
