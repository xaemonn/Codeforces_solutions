#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void myfunc(){
    ll n; cin >> n;
    vector<ll> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        
    }

    ll res = LLONG_MAX;
    ll l = 0;
    while(l < n){
        ll r = l;

        while(r<n-1 && v[l]== v[r+1]){
            r++;
        }

        ll  val=(n+l -r-1)* v[l];
        res = min(res,val);
        l = r + 1;
    }

    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
       myfunc();
    }
}