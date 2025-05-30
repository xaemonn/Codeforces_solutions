#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n + 1,0);
    for (int i = 0; i < n;i++){
       if(s[i]=='('){v[i + 1] = v[i] + 1;}
       else{
           v[i + 1] = v[i] - 1;
       }
    }

    if(v.back()!=0){
        cout << -1 << endl;
        return;
    }

    if((*min_element(v.begin(),v.end())==0)|| *max_element(v.begin(),v.end())==0){
        cout << 1 << endl;
        for (int i = 0; i<n;i++){
            cout << 1 << " ";
        }
        cout << endl;
    }else{
        cout << 2 << endl;
        vector<int> ans;
        int curr = 0;

        while(curr<n){
            int w = (s[curr] == '(') ? 1 : 2;
            do{
                ans.push_back(w);
                curr++;
            } while (curr < n && v[curr] != 0);
        }

        for (int i = 0; i < ans.size();i++){
            cout << ans[i] << " ";
        }
            cout << endl;
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
