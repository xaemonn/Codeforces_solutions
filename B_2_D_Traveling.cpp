#include<bits/stdc++.h>
using namespace std;



void solve(){

    int n, k, a, b;

    cin >> n >> k >> a >> b;
    vector<long long> x(n);
    vector<long long> y(n);
    for (int i = 0; i < n;i++){
        cin >> x[i];
        cin >> y[i];
    }

    long long ans = abs(x[a - 1] - x[b - 1]) + abs(y[a - 1] - y[b - 1]);
    if(k==0){
        cout << ans << endl;
        return;
    }
    long long mina = LLONG_MAX;
    long long minb = LLONG_MAX;

    for (int i = 0; i < k;i++){
        mina = min(mina, abs(x[a - 1] - x[i])+ abs(y[a-1]-y[i]));
        minb = min(minb, abs(x[b- 1] - x[i]) +abs(y[b-1]-y[i]));
    }

    ans = min(ans, mina + minb);

    cout << ans << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}