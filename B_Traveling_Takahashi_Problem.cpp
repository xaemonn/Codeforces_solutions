#include <bits/stdc++.h>
using namespace std;

long double dist(int x1, int y1, int x2, int y2) {
    long long x = (x1 - x2) * (x1 - x2);
    long long y = (y1 - y2) * (y1 - y2);
    long long ans = x + y;
    return sqrtl(ans);
}

void solve() {
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    
   
    x.push_back(0);
    y.push_back(0);
    
    
    for (int i = 0; i < n; i++) {
        int x1;
        cin >> x1;
        int y1;
        cin >> y1;
        x.push_back(x1);
        y.push_back(y1);
    }

    long double cost = 0.0;  
    for (int i = 0; i < n; i++) {
        cost += dist(x[i], y[i], x[i + 1], y[i + 1]);
    }

    
    cost += dist(x[n], y[n], 0, 0);

   
    cout << fixed << setprecision(20) << cost << endl;
}

int main() {
    solve();
}
