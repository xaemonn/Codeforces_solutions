#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    int mid = (n + 1) / 2;
    vector<long long> temp;
    for (int i = 1; i < n;i++){
        temp.push_back(abs(v[i]));
    }

    bool flag = false;

    for (int i = -1; i <= 1; i+=2){
        int x = 0;
        int y = 0;
        long long val = i * v[0];
        if(val<0){
            long long val2 = -val;
            for(auto num:temp){
                if(num>val2){
                    y++;
                }
                x = 0;
            }
        }else{
            for(auto num:temp){
                if(num<val){
                    x++;
                }else{
                    y++;
                }
            }
        }

        if(x<=mid-1 && x+y>=mid-1){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
int main(){

    int T;
    cin >> T;
    while (T--) {

        solve();
    }
    return 0;
}