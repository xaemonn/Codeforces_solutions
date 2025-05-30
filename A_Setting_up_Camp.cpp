#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
 int a,b,c;
    cin >> a>>b>>c;
    long long ans = a;
    int rem = b % 3;
    ans +=( b / 3);
    int req = 3 - rem;
    if(req==1 || req==2){
        if(c<req){
            cout << "-1" << endl;
            return;
        }
        c = c - req;
        ans++;

    }
    ans += ceil((double)c / (double)3);
    cout<< ans<<endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}