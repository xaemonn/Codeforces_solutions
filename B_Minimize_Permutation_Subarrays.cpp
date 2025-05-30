#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int idn = -1;
    int id1 = -1;
    int id2 = -1;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i]==n){
            idn = i;
        }else if(v[i]==1){
            id1 = i;
        }else if(v[i]==2){
            id2 = i;
        }
    }

    if((idn<id1 && idn>id2) ||  (idn>id1 && idn<id2)){
        cout << id1 + 1 << " " << id2+1 << endl;
    }else if(idn<id1 && idn<id2){
        int idx = min(id1, id2);
        cout << idx+1 << " " << idn+1 << endl;
    }else{
        int id = max(id1, id2);
        cout << id+1 << " " << idn+1 << endl;
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