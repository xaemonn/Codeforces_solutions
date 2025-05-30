#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long mini = LLONG_MAX; 

    vector<int> final;
    while (n--) {
        int m;
        cin >> m;

        vector<long long> arr(m);

        
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }

        // min in the array
        long long min1 = *min_element(arr.begin(), arr.end());

        // Update
        mini = min(mini, min1);

        // Erase the first occurrence of min1
        auto it = find(arr.begin(), arr.end(), min1);
        if (it != arr.end()) {
            arr.erase(it);
        }

        
        if (!arr.empty()) {
            final.push_back(*min_element(arr.begin(), arr.end()));
        }
    }

   
    long long sum = accumulate(final.begin(), final.end(), 0LL); // 0LL for initial sum
    if (!final.empty()) {
        sum -= *min_element(final.begin(), final.end()); 
    }
    sum += mini; 

    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
