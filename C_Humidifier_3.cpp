#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;


const int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int main() {
    int H, W, D;
    cin >> H >> W >> D;

    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    queue<pair<int, int>> q;
    vector<vector<int>> visited(H, vector<int>(W, -1)); 

    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == 'H') {
                q.push({i, j});
                visited[i][j] = 0; 
            }
        }
    }

    int humidified_count = 0;

    
    while (!q.empty()) {
        auto it = q.front();
        int x = it.first;
        int y = it.second;
        q.pop();
        
        if (grid[x][y] == '.' || grid[x][y] == 'H') {
            humidified_count++;
        }

        
        for (int d = 0; d < 4; d++) {
            int nx = x + directions[d][0];
            int ny = y + directions[d][1];

            
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] != '#' &&
                visited[nx][ny] == -1 && visited[x][y] + 1 <= D) {
                visited[nx][ny] = visited[x][y] + 1; 
                q.push({nx, ny});
            }
        }
    }

    cout << humidified_count << endl;
    return 0;
}
