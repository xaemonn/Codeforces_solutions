#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int mini = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n;i++){
        if(v[i]<mini){
            mini = v[i];
            idx = i;
        }
    }

    vector<vector<int>> ans;
    int num = mini + 1;
    for (int i = idx - 1; i >= 0;i--)
    {
        vector<int> temp = {idx + 1, i + 1, mini, num};
        ans.push_back(temp);
        num++;
    }
    int temp = mini + 1;
    for (int i = idx + 1; i < n;i++)
    {
        vector<int> t = {idx + 1, i + 1, mini, temp};
        ans.push_back(t);
        temp++;
    }

    cout << n - 1 << endl;

    for (int i = 0; i < ans.size();i++){
        for (int j = 0; j < 4;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}