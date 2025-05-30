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

    int j = n - 1;
    if(v[j]==1){
        cout << "NO" << endl;
        return;
    }

    vector<int> ans;

    while(j>=0){
        int no1 = 0;
        int no0 = 0;   //consecutive zero and ones
        int temp = j;

        

        while(temp>=0 && v[temp]==0){
          
            no0++;
            temp--;
        }
        while(temp>=0 && v[temp]==1){
           
            no1++;
            temp--;
        }

        for (int i = 0; i < no0 - 1; i++){
            ans.push_back(0);
        }

        for (int i = 0; i < no1 ; i++){
            ans.push_back(0);
        }

        ans.push_back(no1);
        j = temp;
    }

    cout << "YES" << endl;
    int sz = ans.size();
    for (int i = 0; i < sz ;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}