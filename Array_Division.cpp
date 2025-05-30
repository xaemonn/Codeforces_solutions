#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll k, ll mid, vector<ll>& v){
    ll curr = 0;
    ll subs = 1;
    int n = v.size();
    for (int i = 0; i < n;i++){
           if(curr+v[i]>mid){
               curr = v[i];
               subs++;
           }else{
               curr += v[i];
           }
    }

    return subs <= k;
}


void solve() {
    
   
        ll n,k;
        cin >> n>>k;
        ll sum = 0;
        
        vector<ll> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
            sum += v[i];
        }

        ll low = *max_element(v.begin(), v.end());
        ll high = sum;

        
        while(low<high){
            ll mid = low + (high - low) / 2;
            if(check(k,mid,v)){
                
                high = mid ;
            }else{
                low = mid + 1;
            }
        }

        cout << low << endl;
    }

    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     solve();
    
    return 0;
}