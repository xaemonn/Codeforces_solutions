#include <bits/stdc++.h>
using namespace std;

void solve() {
   long long n, m, l;
    cin >> n >> m >> l;

    vector<pair<int,long long>> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i].first >> h[i].second;
    }

    vector<pair<int,long long>> p(m);
    for (int i = 0; i < m; i++) {
        cin >> p[i].first >> p[i].second;
    }

   long long power = 1;  
   long long pos = 1;    

   long long hurdle = 0;  
   long long idx = 0;     
    priority_queue<long long> pq;  
   long long ans = 0;

    for (long long i = 0; i < n;i++){
        

        long long len = h[i].second - h[i].first + 2;

        while(idx<m && p[idx].first<h[i].first){
            pq.push(p[idx].second);
            idx++;
        }

        while(!pq.empty() && power<len){
            power += pq.top();
            pq.pop();
            ans++;
        }

        if(power<len){
            cout << "-1" << endl;
            return;
        }


    }

    cout << ans << endl;
}

int main() {
   long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
