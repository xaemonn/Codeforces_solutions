#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n,k;
    cin >> n>>k;
    vector<int> v(n);
    vector<int> pref(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {   if(i==0){
            pref[i] = v[0];
        }else{
            pref[i] = v[i] + pref[i - 1];
        }
    }

    int total = -1;
    for (int i = 0; i < n;i++){
        if(pref[i]==k){
            cout << "0" << endl;
            return;
        }
        else if(pref[i]>k){
            if(i>0) total = pref[i - 1];
            else
                total = 0;

            break;
        }
    }
    if(total==-1){
        cout << k - pref[n - 1] << endl;
        return;
    }
    cout << k - total << endl;
}

int main(){
    int t;
    cin >>
        t;
    while (t--)
    {
        solve();
        }
}