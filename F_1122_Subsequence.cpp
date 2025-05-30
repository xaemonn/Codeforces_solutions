#include <bits/stdc++.h>
using namespace std;

int recur(vector<int>& v, int idx, int& n, vector<int>& dp, vector<bool>& visited) {
    if (idx >= n - 1) {
        return 0; 
    }
    if (dp[idx] != -1) {
        return dp[idx];
    }

    
    int noTake = recur(v, idx + 1, n, dp, visited);
                                                              
    
    int take = 0;
    
    if (idx + 1 < n && v[idx] == v[idx + 1] && !visited[v[idx]]) {
        visited[v[idx]] = true; 
        take = 1 + recur(v, idx + 2, n, dp, visited); 
        visited[v[idx]] = false; 
    }

    
    return dp[idx] = max(take, noTake);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> dp(n, -1);
    vector<bool> visited(1e5 + 1, false); 
    cout << 2 * recur(v, 0, n, dp, visited) << endl;

    return 0;
}
