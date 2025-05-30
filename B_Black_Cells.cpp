#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> v(n);


    for (int i = 0; i < n;i++){
       
        cin >> v[i];

    }

    if(n==1){
        cout << 1 << endl;
        return;
    }

   

    long long diff = LLONG_MIN, sec = LLONG_MIN;
    for (int i = 0; i < n - 1; i++) {
        long long num = (v[i + 1] - v[i]); 
        if (num > diff) {
            sec = diff;
            diff = num;
        } else if (num > sec && num < diff) {
            sec = num;
        }
    }

    if (sec == LLONG_MIN) {
        cout << diff << endl;
    } else {
        cout << sec << endl;
    }

    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}