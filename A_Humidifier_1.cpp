#include <bits/stdc++.h>
using namespace std;


int main(){
   int N;
    cin >> N;
    vector<int> T(N), V(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i] >> V[i];
    }
    
    int water_level = 0;
    int previous_time = 0;
    
    for (int i = 0; i < N; i++) {
        
        int time_gap = T[i] - previous_time;
        
        
        water_level = max(0, water_level - time_gap);
        
        
        water_level += V[i];
        
        
        previous_time = T[i];
    }
    
    cout << water_level << endl;
}