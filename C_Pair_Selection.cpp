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



bool check(long double ratio, vector<pair<ll, ll>>&v , ll k){

    ll num = 0, den = 0;
    vector<long double> temp(v.size());
    for (int i = 0; i < v.size();i++){
        temp[i] = (long double)v[i].first - ratio * (double)v[i].second;
    }

    sort(temp.rbegin(), temp.rend());

    long double val = 0;

    for (int i = 0; i < k;i++){
        val += temp[i];
    }

    if(val>0){
        return true;
    }

    return false;
}

void solve(){
    ll n; cin >> n;
    ll k;
    cin >> k;
    vector<pair<ll,ll>> v(n);
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }

    long double preci = 1e-12;

    long double low = 0;
    long double high = 1e18;
    long double ans = 0;

    
    while(high-low>preci){
        long double mid = (low + high) / 2;
        if(check(mid,v,k)){
            ans = max(ans, mid);
            low = mid + preci;
        }else{
            high = mid - preci;
        }
    }

   

    cout << fixed << setprecision(10) << ans << endl;
}

int main(){
    solve();
}