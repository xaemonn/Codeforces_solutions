#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    int ans = INT_MIN;
    int curr = v[0];
    int par = v[0] % 2;

    ans = curr;

    for (int i = 1; i < n;i++){
        if(abs(v[i]%2)==par){
            curr = v[i];
        }else{
            curr += v[i];  
        }

        if(v[i]>curr){
            curr = v[i];
        }
        par = abs(v[i] % 2);
        ans = max(curr, ans);

        

    }

    cout << ans << endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}