#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m));
    map<int, int> colorCount; // Count of each color
    
    // Read input grid and count colors
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            colorCount[grid[i][j]]++;
        }
    }
    
    // If all cells are already the same color
    if(colorCount.size() == 1) {
        cout << "0\n";
        return;
    }
    
    // Key insight: We can color maximum cells that are:
    // 1. Same color
    // 2. Not adjacent (strangers)
    // We can color (n*m+1)/2 cells in one step if they're properly arranged
    
    int ans = 0;
    while(colorCount.size() > 1) {
        // Find color with maximum frequency
        int maxColor = 0, maxCount = 0;
        for(auto it : colorCount) {
            auto color=it.first ;
            auto count=it.second ;
            if(count > maxCount) {
                maxCount = count;
                maxColor = color;
            }
        }
        
        // Create a mask of cells we can color together
        vector<vector<bool>> canTake(n, vector<bool>(m, false));
        int taken = 0;
        
        // Try to take maximum possible strangers of the same color
        for(int i = 0; i < n; i++) {
            for(int j = (i % 2); j < m; j += 2) {
                if(grid[i][j] == maxColor) {
                    canTake[i][j] = true;
                    taken++;
                }
            }
        }
        
        // Color all selected cells with the color of most frequent remaining color
        // (or any remaining color if this was the last one)
        int newColor = colorCount.begin()->first;
        if(newColor == maxColor && colorCount.size() > 1) {
            newColor = next(colorCount.begin())->first;
        }
        
        // Update grid and counts
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(canTake[i][j]) {
                    grid[i][j] = newColor;
                }
            }
        }
        
        // Update color counts
        colorCount[newColor] += taken;
        colorCount[maxColor] -= taken;
        if(colorCount[maxColor] == 0) {
            colorCount.erase(maxColor);
        }
        
        ans++;
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}