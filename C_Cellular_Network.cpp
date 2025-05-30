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

bool check(ll d, vector<ll>&pts , vector<ll>& tow){
    ll n = pts.size();
    ll m = tow.size();

    for (int i = 0; i < n;i++){
        ll pt = pts[i];

        auto it = lower_bound(tow.begin(), tow.end(), pt); // first tower greater than or equal to city

        bool ok = false;
        if(it!=tow.end() && abs(*it-pt)<=d){
            ok = true;

        }
         //previous tower
        if(it!=tow.begin() && abs(*(it-1)-pt)<=d){
            ok = true;
        }
        if(!ok)
        return false;
    }

    
    return true;
}

void solve(){
    ll n; cin >> n;
    ll m;
    cin >> m;
    vector<ll> pts(n),tow(m);
    for (int i = 0; i < n; i++) {
        cin >> pts[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> tow[i];
    }

    ll ans = 1e18;
    ll low = 0;
    ll high=1e18;
    while(low<=high){
        ll mid = (low + high) / 2;
        if(check(mid,pts,tow)){
            ans = min(ans,mid);
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

int main(){
    solve();
}