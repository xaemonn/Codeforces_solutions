#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> parent, rank;
    
    UnionFind(int n) : parent(n), rank(n, 1) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);  // Path compression
        }
        return parent[x];
    }
    
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

int main() {
    int H, W, Q;
    cin >> H >> W >> Q;

    UnionFind uf(H * W + 1);  // 1-based indexing, total cells = H * W
    vector<vector<int>> grid(H + 1, vector<int>(W + 1, 1));  // All walls initially exist
    int remaining_walls = H * W;  // Start with all walls intact

    vector<int> last_row(W + 1, 0);  // To store the last destroyed wall position for each column
    vector<int> last_col(H + 1, 0);  // To store the last destroyed wall position for each row

    for (int i = 0; i < Q; ++i) {
        int x, y;
        cin >> x >> y;

        if (grid[x][y] == 1) {
            // If there is a wall at (x, y), destroy it
            grid[x][y] = 0;
            remaining_walls--;

            // Union with last destroyed wall in the same column
            if (last_row[y] != 0) {
                uf.unite(x * W + y, last_row[y] * W + y);
            }
            last_row[y] = x;

            // Union with last destroyed wall in the same row
            if (last_col[x] != 0) {
                uf.unite(x * W + y, x * W + last_col[x]);
            }
            last_col[x] = y;
        } else {
            // Check upward direction
            if (last_row[y] != 0 && last_row[y] < x && grid[last_row[y]][y] == 1) {
                grid[last_row[y]][y] = 0;
                remaining_walls--;  // Destroy this wall
                uf.unite(x * W + y, last_row[y] * W + y);  // Union with current position
                last_row[y] = x;  // Update last destroyed wall in this column
            }

            // Check downward direction
            if (last_row[y] != 0 && last_row[y] > x && grid[last_row[y]][y] == 1) {
                grid[last_row[y]][y] = 0;
                remaining_walls--;  // Destroy this wall
                uf.unite(x * W + y, last_row[y] * W + y);
            }

            // Check left direction
            if (last_col[x] != 0 && last_col[x] < y && grid[x][last_col[x]] == 1) {
                grid[x][last_col[x]] = 0;
                remaining_walls--;  // Destroy this wall
                uf.unite(x * W + y, x * W + last_col[x]);
                last_col[x] = y;  // Update last destroyed wall in this row
            }

            // Check right direction
            if (last_col[x] != 0 && last_col[x] > y && grid[x][last_col[x]] == 1) {
                grid[x][last_col[x]] = 0;
                remaining_walls--;  // Destroy this wall
                uf.unite(x * W + y, x * W + last_col[x]);
            }
        }
    }

    // Output the number of remaining walls
    cout << remaining_walls << endl;
    return 0;
}
