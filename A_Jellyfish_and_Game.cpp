#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);

  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        
    }

    
    sort(a.begin(), a.end()); // Jellyfish's apples (ascending)
    sort(b.rbegin(), b.rend()); // Gellyfish's apples (descending)
    long long sumeven = 0;
    long long sumodd = 0;
    int mina = a[0];
    int maxa = a[n - 1];
    int minb = b[0];
    int maxb = b[m - 1];
    if(mina<maxb){
        swap(a[0], b[m - 1]);
    }
    long long ans = 0;
    if(k==1){
        cout << accumulate(a.begin(), a.end(), 0)<<endl;
        return;}

        sort(a.begin(), a.end()); // Jellyfish's apples (ascending)
    sort(b.rbegin(), b.rend()); // Gellyfish's apples (descending)

    int mina = a[0];
    int maxa = a[n - 1];
    int minb = b[0];
    int maxb = b[m - 1];
    if(minb<maxa){
        swap(b[0], a[n - 1]);
    }
    if(k==2){
        cout << accumulate(a.begin(), a.end(), 0)<<endl;
        return;}


    sort(a.begin(), a.end()); // Jellyfish's apples (ascending)
    sort(b.rbegin(), b.rend()); // Gellyfish's apples (descending)

    int maxi = a[n - 1] >= b[m- 1] ? a[n - 1] : b[m - 1];
    int mini = a[0] < b[0] ? a[0] : b[0];

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
