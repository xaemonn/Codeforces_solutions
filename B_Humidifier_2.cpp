
#include <bits/stdc++.h>
using namespace std;






const int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};


set<pair<int, int>> get_humidified_cells(int r, int c, int D, int H, int W, const vector<string>& grid) {
    set<pair<int, int>> humidified;
    for (int dr = -D; dr <= D; dr++) {
        for (int dc = -D; dc <= D; dc++) {
            if (abs(dr) + abs(dc) > D) continue;
            int nr = r + dr, nc = c + dc;
            if (nr >= 0 && nr < H && nc >= 0 && nc < W && grid[nr][nc] == '.') {
                humidified.insert({nr, nc});
            }
        }
    }
    return humidified;
}

int main() {
    int H, W, D;
    cin >> H >> W >> D;

    vector<string> grid(H);
    vector<pair<int, int>> floor_cells;

    for (int i = 0; i < H; i++) {
        cin >> grid[i];
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                floor_cells.emplace_back(i, j);
            }
        }
    }

    int max_humidified = 0;
    int n = floor_cells.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
           
            auto humidifier1 = get_humidified_cells(floor_cells[i].first, floor_cells[i].second, D, H, W, grid);
            auto humidifier2 = get_humidified_cells(floor_cells[j].first, floor_cells[j].second, D, H, W, grid);

            
            set<pair<int, int>> combined = humidifier1;
            combined.insert(humidifier2.begin(), humidifier2.end());

            // Update the maximum count
            max_humidified = max(max_humidified, (int)combined.size());
        }
    }

    cout << max_humidified << endl;
    return 0;
}
