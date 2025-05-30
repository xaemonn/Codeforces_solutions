#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n>> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> trans(m, vector<int>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            trans[j][i] = mat[i][j];
        }
    }

    for(auto& row:trans){
        sort(row.begin(), row.end());
    }

    long long ans = 0;
    for (int i = 0; i < m;i++){
        long long sum = 0;
        for (int j = 0; j < n ; j++){
                if(j != 0){
                    long long temp = j;
                    temp *= trans[i][j] ;
                    temp -= sum;
                    ans += temp;
                    
                }
                   sum += trans[i][j];
               
        }
    }
    cout << ans << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
    return 0;
}