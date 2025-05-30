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

ll recur(vi& v, ll& sum, ll curr,int idx){
    if(idx==v.size()){
        ll diff = sum - curr;
        return abs(curr-diff);
    }

    ll pick = recur(v, sum, curr + v[idx], idx + 1);
    ll notpick = recur(v, sum, curr, idx + 1);

    return min(pick, notpick);
}

 
void solve(){
    int n;
    cin >> n;
    vi v(n);
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */ cin >> v[i];
        total += v[i];
    }

    ll ans = recur(v, total, 0,0);

    cout << ans << endl;
}

int main(){
    solve();
}