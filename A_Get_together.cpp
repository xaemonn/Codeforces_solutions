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

bool check(vector<pair<long double,long double>>& v, long double k){
    long double left=-1e18;
    long double right = 1e18;
    int n = v.size();
    for (int i = 0; i < n;i++){
        left = max(left , v[i].first- k*v[i].second);
        right = min(right , v[i].first+ k*v[i].second);
        if(left>right){
            return false;
        }
    }

    return true;
}

void solve(){
    ll n; cin >> n;
    vector<pair<long double,long double>> v(n);
    for (int i = 0; i < n; i++) {
       long double x, u;
        cin >> x >> u;
        v[i] = {x,u};
    }

    long double low = 0, high = 1e9, ans = 1e9;

    long double preci = 1e-7;

    for (int i = 0; i < 100;i++){
        long double mid = (high + low) / 2.0;

        if(check(v,mid)){
            ans = mid;
            high = mid - preci;
        }else{
            low = mid + preci;
        }
    }

        cout << fixed << setprecision(7) << ans << endl;
}

int main(){
    solve();
}