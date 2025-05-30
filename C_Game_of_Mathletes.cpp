#include <bits/stdc++.h>
using namespace std;



void solve() {

    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    map<int, int> freq;

    for (int i = 0; i < n;i++){
        cin >> nums[i];
        freq[nums[i]]++;
    }

    int s = 0;

    for(auto& it:freq){
        int val = it.first;
        int cnt = it.second;
        int other = k - val;
        if(freq.count(other)){
            int p = min(cnt, freq[other]);
            if(val==other){
                p = p / 2;

            }
            s += p;
            freq[val] -= p;
            freq[other] -= p;
        }
    }

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
