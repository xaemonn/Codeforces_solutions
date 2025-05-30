#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;  // Input the size of the grid (N is even)
    vector<vector<char>> grid(N+1, vector<char>(N+1));
    
    // Input the grid
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> grid[i][j];
        }
    }
    
    // Create a new grid to store the updated values
    vector<vector<char>> new_grid = grid;

    // Perform the operation for each i=1,2,...,N/2
    for (int i = 1; i <= N / 2; i++) {
        int start = i;              // This is row index starting at i
        int end = N +1- i;        // This is the last row index (N+1-i) in 0-indexed form

        // Swap the pairs (x, y) and (y, N+1-x) and store results in new_grid
        for (int x = start; x <= end; x++) {
            for (int y = start; y <= end; y++) {
                new_grid[y][N+1-x] = grid[x][y];
            }
        }
    }

    // Output the final grid after all operations
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << new_grid[i][j];
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
