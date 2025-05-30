#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(){
    int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        vector<long long> equals;
        long long ans = -1;
        
        for(auto it:freq){
            if(it.second>=4){
                ans = it.first;
            }
            else if(it.second>=2){
                equals.push_back(it.first);
            }
        }

        if(ans!=-1){
            cout << ans << " " << ans << " " << ans << " " << ans<<endl;
            return;
        }

        if (equals.size()==0){
            cout << -1 << endl;
            return;
        }

            if (equals.size() >= 2)
            {
                cout << equals[0] << " " << equals[0] << " " << equals[1] << " " << equals[1] << endl;
                return;
            }

         freq[equals[0]]--;
         freq[equals[0]]--;
         if(freq[equals[0]]==0){
             freq.erase(equals[0]);
         }

         for (auto it = freq.begin(); it != freq.end(); it++)
         {
             long long num = it->first;
             if(it==freq.begin())
                 continue;

             auto it2 = prev(it);
             
             
             if(abs(it2->first-it->first)<2*equals[0]){
                cout<<equals[0] << " " << equals[0] << " " << it->first << " " << it2->first << endl;
                return;
             }
         }

         cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
