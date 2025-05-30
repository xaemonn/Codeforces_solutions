#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;



void solve()
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }

        int l = 0;
        int r = n - 1;
        int mx=n;
        int mi = 1;
        while(l<=r){
            if(v[l]==mx){
                l++;
                mx--;
            }
            else if(v[l]==mi){
                l++;
                mi++;
            }
            else if(v[r]==mx){
                r--;
                mx--;
            }else if(v[r]==mi){
                r--;
                mi++;
            }else{
                break;
            }
        }

        if(l<=r){
            cout << l + 1 << " " << r + 1 << endl;
        }else{
            cout << -1 << endl;
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