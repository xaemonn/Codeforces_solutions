#include <bits/stdc++.h>

using namespace std;

#define ll long long



ll mod = 1e9 + 7;
ll maxx = 1e6;




void func(){
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    ll mini = LLONG_MAX;
    
    for (int i = 0; i < n;i++){
        mini = min(mini, v[i]);
    }
    ll maxi = LLONG_MIN;

    for (int i = 0; i < n;i++){
        maxi = max(maxi, v[i]);
    }

    ll extra = 0;
    for (int i = 0; i < n;i++){
        extra += v[i];
    }

    ll nums = 0;

    for (int i = 0; i < n;i++){
        if(maxi==v[i]){
           nums++;
        }
    }

    if( (maxi-mini==k+1 && nums>1)) {
        cout << "Jerry" << endl;
    }else if(maxi-mini>k+1){
        cout << "Jerry"<<endl;}
        else if(extra%2==0){
            cout << "Jerry"<<endl;
    }else{
        cout << "Tom"<<endl;
    }
}

        int main()
        {
            int t;
            cin >> t;
            while (t--)
            {
                func();
            }
        }