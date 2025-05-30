#include <bits/stdc++.h>
using namespace std;


class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

void solve(){
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<pair<int, int>> a(m1);
    vector<pair<int, int>> b(m2);
    for (int i = 0; i < m1; i++){
        cin >> a[i].first >> a[i].second;
    }
     for (int i = 0; i < m2; i++){
        cin >> b[i].first >> b[i].second;
    }

    DisjointSet dsF(n), dsG(n);

    for(auto& it:b){
        dsG.unionBySize(it.first-1, it.second-1);
    }

    int extra = 0;

    for(auto& it:a){
        if(&& dsF.findUPar(it.first-1)==dsF.findUPar(it.second-1)){
            extra++;
        }
    }

}



int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}