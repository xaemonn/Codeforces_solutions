#include <bits/stdc++.h>
using namespace std;
class DisjointSet {
    vector<int> rank, parent;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
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
};

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1); 
    vector<int> degree(n + 1, 0);  

   
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }

   int v1 = max_element(degree.begin() + 1, degree.end()) - degree.begin();

   
    vector<int> remaining_degree = degree;
    remaining_degree[v1] = -1; 

    
    for (int u : adj[v1]) {
        remaining_degree[u]--;
    }

   
    int v2 = -1;
    int max_degree = -1;
    for (int i = 1; i <= n; i++) {
        if (remaining_degree[i] > max_degree) {
            max_degree = remaining_degree[i];
            v2 = i;
        }
    }

    //cout << v1 << " " << v2 << endl;
     DisjointSet ds(n);
     for (int u = 1; u <= n;u++){
        if(u==v1 || u==v2)
            continue;
        for(auto& v:adj[u]){
            if(v==v1|| v==v2) continue;

            ds.unionByRank(u,v);
        }    
     }

     set<int> components;
     for (int i = 1; i <= n; i++) {
        if (i != v1 && i != v2) {
            components.insert(ds.findUPar(i));
        }
    }
    cout << components.size()  << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}