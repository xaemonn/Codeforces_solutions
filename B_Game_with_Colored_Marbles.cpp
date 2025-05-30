#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
    cin >> n;
    vector<int> v(n);
   
    map<int, int> mpp;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        mpp[v[i]]++;
        }

        int singles = 0;
        for(auto it:mpp){
            if(it.second==1){
                singles++;
            }
        }

        int ans = 0;

        int cnt = mpp.size()-singles;
        ans = (singles + 1) / 2;
        ans = ans * 2;

        ans += cnt;

        cout << ans << endl;
}

int main(){
    int t;
    cin >>
        t;
    while (t--)
    {
        solve();
        }
}