#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
 int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());
   
    long long pro = 1;
    for (int i = n - 1; i >= 0; i--){
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        int idx = it-a.begin();
        if(it==a.end()){
            cout << "0" << endl;
            return;
        }else{
            int num = n - idx;
            num = num - (n - i-1);

            pro =(pro*num)%MOD;
        }
    }
    cout << pro << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}