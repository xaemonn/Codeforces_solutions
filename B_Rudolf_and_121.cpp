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

    for (int i = 0; i < n - 2; i++){
        if(v[i]>0){
           int ops = v[i];
           v[i + 1] = v[i + 1] - 2 * ops;
          
               v[i + 2] = v[i + 2] - ops;
        
        }
        else if(v[i]<0){
            cout << "NO" << endl;
            return;
        }
    }
    
    if(v[n-1]==0 && v[n-2]==0){
        cout << "YES" << endl;
       
    }else{
        cout << "NO" << endl;
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