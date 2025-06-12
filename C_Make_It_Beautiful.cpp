#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
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

void solve(){
    ll n; cin >> n;
    ll k;
    cin >> k;
    vector<ll> v(n);
    ll ans=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ans += __builtin_popcountll(v[i]);
    }

    vector<ll> c;

    for (ll i = 0; i < n;i++){
        ll val = v[i];
        
        while(true){
            ll bit = 0;
       while ( (val >> bit) & 1 ) {
          ++bit;
      }
            ll req = 1LL << bit;

           if(k>=req){
               c.push_back(req);
               val += req;
           }else{
               break;
           }
        }
    }

    sort(c.begin(),c.end());
       for(auto i:c){
        if(k>=i){
            k -= i;
            ans++;
        }else{
            break;
        }
       }

        cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}