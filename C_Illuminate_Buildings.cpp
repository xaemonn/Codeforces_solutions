#include <bits/stdc++.h>
using namespace std;

int findMaxDecoratedBuildings(vector<int>& H) {
    int N = H.size();
    int maxBuildings = 1; 

    
    for (int i = 0; i < N; i++) {
        
        for (int d = 1; i + d < N; d++) {
            int currentHeight = H[i];
            int count = 1; 
            
            
            for (int j = i + d; j < N; j += d) {
                if (H[j] == currentHeight) {
                    count++;
                } else {
                    break;
                }
            }
            
            
            maxBuildings = max(maxBuildings, count);
        }
    }

    return maxBuildings;
}

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    cout << findMaxDecoratedBuildings(H) << endl;
    return 0;
}
