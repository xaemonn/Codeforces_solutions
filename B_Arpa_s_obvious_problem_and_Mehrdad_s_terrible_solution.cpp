#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,xorr;
    cin >> n >> xorr;
    vector<int> arr(n);

    map<int, int> mp;
     long long cnt = 0;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
        int num = arr[i] ^ xorr;
        cnt += mp[num];
        mp[arr[i]]++;
    }

   


    cout << cnt  << endl;
}

int main(){
    solve();
}