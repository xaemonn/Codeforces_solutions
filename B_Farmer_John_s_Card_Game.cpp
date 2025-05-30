#include <bits/stdc++.h>
using namespace std;


bool compare(int a, int b) {
    return a < b;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> c(n, vector<int>(m));
        vector<int> smol(n);
        vector<int> order(n);

       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> c[i][j];
            }
            sort(c[i].begin(), c[i].end(), compare);
            smol[i] = c[i][0];
            order[i] = i + 1;          
        }

       
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (smol[i] > smol[j]) {
                   
                    swap(smol[i], smol[j]);
                   
                    swap(order[i], order[j]);
                }
            }
        }

        
        int pile = -1;
        bool valid = true;

        for (int r = 0; r < m && valid; r++) {
            for (int i = 0; i < n && valid; i++) {
                int cow = order[i] - 1;
                bool played = false;

                for (int j = 0; j < m; j++) {
                    if (c[cow][j] > pile) {
                        pile = c[cow][j];
                        c[cow][j] = -1;
                        played = true;
                        break;
                    }
                }

                if (!played) valid = false;
            }
        }

        if (valid) {
            for (int i = 0; i < n; i++) {
                cout << order[i] << " ";
            }
            cout <<endl;
        } else {
            cout << "-1"<<endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
