#include<bits/stdc++.h>
using namespace std;

void solve(){
      int n,m;
        cin >> n>>m;

       priority_queue <int> pq;
        map<int, int> mp;
        for (int i = 0; i < n;i++){
            int num;
            cin >> num;
            mp[num]++;
        }

        for (int i = 0; i < m;i++){
            int val;
            cin >> val;
            pq.push(val);
        }
        bool temp = false;
        for (int j = 0; j < 2*n-m;j++ )
            {
                if(pq.empty()){
                    temp = true;
                    break;
                }
                int x = pq.top();
                pq.pop();

                if (mp[x] > 0)
                {
                    mp[x]--;
                    if (mp[x] == 0)
                    {
                        mp.erase(x);
                    }
                }
                else
                {
                    pq.push(x / 2);
                    pq.push((x + 1) / 2);
                }
            }

            if(pq.empty()&& temp){
                cout << "YES" << endl;
                return;
            }
            cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
