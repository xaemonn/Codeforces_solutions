#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<pair<char, char>> ans;

void tower(char a, char b, char c, int n) {
    if (n == 1) {
        ans.push_back({a, b});
        return;
    }

   
    tower(a, c, b, n - 1);

    
    ans.push_back({a, b});

   
    tower(c, b, a, n - 1);
}

void solve() {
    int n;
    cin >> n;

    char a = 'A', b = 'C', c = 'B'; 
    tower(a, b, c, n);

    
    cout << ans.size() << endl;

    
    for (auto it : ans) {
        cout << it.first-64 << " " << it.second-64 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
