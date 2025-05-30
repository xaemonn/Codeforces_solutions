#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n,q;
    cin >> n>>q;
    vector<int> v(n);
    vector<int> que(q);
    for (int i = 0; i < n;i++ ){
        cin >> v[i];
    }
    for (int i = 0; i < q;i++ ){
        cin >> que[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(!mp[v[i]]){
            mp[v[i]] = i + 1;
        }
    }

    vector<int> ans(q);

    for (int i = 0; i < q; i++){
        ans[i] = mp[que[i]];
        for (auto& it:mp){
           if(it.first!=que[i]){
              if(it.second<mp[que[i]]){
                  it.second++;
              }
           }
        }
        mp[que[i]] = 1;
    }

    for (int i = 0; i < q; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
   
        solve();
        
}