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

const int N = 1e7;
vector<bool> isprime(N + 1, true);
vector<int> primes;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vl v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vl cost;

    for (ll i = 0; i < n - 1; i++)
    {
        ll diff = v[i + 1] - v[i];
        if (diff > x)
        {
            ll c = ceil((long double)diff / (long double)x);
            c = c - 1;
            cost.push_back(c);
        }
    }

    ll total = cost.size();
    sort(cost.begin(), cost.end());
    for (ll i = 0; i < cost.size(); i++)
    {
        if (k >= cost[i])
        {
            k -= cost[i];
            total--;
        }
        else
        {
            break;
        }
    }

    cout << total + 1 << endl;
}

int main()
{

    ios_base::sync_with_stdio(false); // ye add imp
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}