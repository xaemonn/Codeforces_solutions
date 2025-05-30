#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> mat(n, vector<int>(n));
    vector<pair<int, int>> deg; // To store degree and vertex pairs
    
    // Reading the adjacency matrix and calculating degree
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        int d = 0;
        
        // Calculate the degree for vertex i
        for (int j = 0; j < n; j++) {
            mat[i][j] = row[j] - '0';
            if (i < j) {  // Only count edges in the upper triangular part
                d += mat[i][j]; // Add to degree if there's an edge
            }
        }
        
        deg.push_back({d, i + 1}); // Store the degree and vertex number (1-based index)
    }
    
    // Sort the degree vector based on degree, and tie-break by vertex number in descending order
    sort(deg.begin(), deg.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second; // If degrees are the same, sort by vertex number in descending order
        }
        return a.first > b.first; // Sort by degree in descending order
    });
    
    // Output the vertices in the sorted order based on their degrees
    for (int i = 0; i < n; i++) {
        cout << deg[i].second << " "; // Output the vertex numbers (1-based)
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}
