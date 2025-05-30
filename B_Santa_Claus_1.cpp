#include <bits/stdc++.h>
using namespace std;

void solve() {
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    string T;
    cin >> T;

    set<pair<int, int>> visitedHouses; 
    
    X--;
    Y--;

    for (char move : T) {
        if (move == 'U' && X - 1 >= 0 && grid[X - 1][Y] != '#') {
            X--; 
        } else if (move == 'D' && X + 1 < H && grid[X + 1][Y] != '#') {
            X++; 
        } else if (move == 'L' && Y - 1 >= 0 && grid[X][Y - 1] != '#') {
            Y--; 
        } else if (move == 'R' && Y + 1 < W && grid[X][Y + 1] != '#') {
            Y++; 
        }
        
       
        if (grid[X][Y] == '@') {
            visitedHouses.insert({X, Y});
        }
    }

    
    cout << X + 1 << " " << Y + 1 << " " << visitedHouses.size() << endl;
}

int main() {
    solve();
    return 0;
}
