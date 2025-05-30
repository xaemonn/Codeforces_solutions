#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> rank, parent, size; 
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1); 
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]); 
    }

    void unionByRank(int p, int child) {
        int ulp_u = findUPar(p); 
        int ulp_v = findUPar(child); 

         if (ulp_u == ulp_v) return; 

        
      /*  if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u]; 
        } else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
            rank[ulp_u]++; 
        } */
        parent[ulp_v] = ulp_u;

        size[ulp_u] += size[ulp_v];
    }

    int getSize(int node) {
        int ulp = findUPar(node); 
        return size[ulp]; 
    }
};

int main() {
    int n, q;
    cin >> n >> q;

    DisjointSet ds(n);
    vector<int> ans;
    map<int, int> mp;
    for (int i = 1; i <= n;i++){
        mp[i] = 1;
    }
        for (int i = 0; i < q; i++)
        {
            int typ;
            cin >> typ;
            if (typ == 1)
            {
                int c, par;
                cin >> c >> par;
                ds.unionByRank(c, par);
                mp[c] = 0;
                mp[par] = ds.getSize(par);
            }
            else if (typ == 2)
            {
                int x;
                cin >> x;
                ans.push_back(mp[x]);
            }
        }

    
    for (int res : ans) {
        cout << res << endl;
    }

    return 0;
}
