#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>>& v,int up, int left){
    int n = v.size();
    int m = v[0].size();
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
             if(v[i][j]==1){
                 int dx = i - left;
                 int dy = j - up;
                 if(dx<0 || dy<0 ){
                     return false;
                 }
             }
        }
    }
    return true;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            char c;
            cin >> c;
            if(c=='R'){
                v[i][j] = 1;
            }
        }
    }

    if(v[0][0]==1){
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
             if(v[i][j]==1){
                 int up = j - 0;
                 int left = i - 0;
                 if(check(v,up,left)){
                     cout << "YES" << endl;
                     return;
                 }
             }
        }
    }
    cout << "NO" << endl;
}


int main(){
    
   int t;
   cin >> t;
   while(t--){
       solve();
   }
}