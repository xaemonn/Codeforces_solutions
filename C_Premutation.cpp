#include<bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n-1, 0));
    int m = n - 1;

    
    

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> v[i][j];
            
        }
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[v[i][0]]++;
    }

    map<vector<int>, int> mp;
    vector<int> ans(n);
    for (int i = 0; i < n;i++){
        
        vector<int> slice(v[i].begin() + 1, v[i].end());
        if(mp.find(slice)!=mp.end()){
            for (int j = 2; j < n;j++){
                ans[j] = slice[j - 2];
            }
            
            break;
        }else{
            mp[slice]++;
        }
    }
    int first1 = -1;
    int second2 = -1;
    for(auto it:freq){
        if(it.second==n-1){
            first1 = it.first;
        }else{
            second2 = it.first;
        }
    }
    ans[0] = first1;
    ans[1] = second2;
    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}


int main(){
    
   int t;
   cin >> t;
   while(t--){
       solve();
   }
}