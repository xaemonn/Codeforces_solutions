#include <bits/stdc++.h>
using namespace std;

long long gridlandMetro(int n, int m, int k, vector<vector<int>> tracks) {
    map<int, vector<pair<int, int>>> rtrack;
    
   
    for (auto& track : tracks) {
        int r = track[0], c1 = track[1], c2 = track[2];
        rtrack[r].emplace_back(c1, c2);
    }
    
    long long total = 0;
    
   
    for (auto& [row, tlist] : rtrack) {
        sort(tlist.begin(), tlist.end());
        int start = tlist[0].first, end = tlist[0].second;
        
        for (int i = 1; i < tlist.size(); i++) {
            if (tlist[i].first <= end + 1) {
                end = max(end, tlist[i].second);
            } else {
                total += (end - start + 1);
                start = tlist[i].first;
                end = tlist[i].second;
            }
        }
        total += (end - start + 1);
    }
    
    long long cells = (long long)n * m;
    return cells - total;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> tracks(k, vector<int>(3));
    for (int i = 0; i < k; i++) {
        cin >> tracks[i][0] >> tracks[i][1] >> tracks[i][2];
    }
    
    cout << gridlandMetro(n, m, k, tracks) << endl;
    return 0;
}
