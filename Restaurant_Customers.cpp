#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
void solve(){
     ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<ll> dep(n);

    for (int i = 0; i<n ;i++){
        cin >> arr[i];
        cin >> dep[i];
    }

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i = 0;
    int j = 0;

    ll cust = 0;
    ll maxx = 1;

    while (i < n&& j<n){
        if(arr[i]<dep[j]){
            cust++;
            maxx = max(maxx, cust);
            i++;
        }else{
            cust--;
            j++;
        }
    }

    cout << maxx << endl;
}

int main(){
   
        solve();
        
}