#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isfair(ll n){
    ll x=n;
    while(x>0){
        ll r=x%10;
        if(r!=0 && n%r!=0){
            return false;
        }
        else{
            x=x/10;
        }
    }
    return true;
}


void solve(){
    ll n;
    cin >> n;
    
    while(!isfair(n)){n++;}
    cout << n<< endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
