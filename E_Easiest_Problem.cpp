#include<bits/stdc++.h>
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




ll dp[100005][3];

ll recur(string& s, int curr, char last) {
    
    if (curr == s.length()) {
        return 0;
    }
    if (dp[curr][last - '0'] != -1) {
        return dp[curr][last - '0'];
    }
    ll pick = 0, notpick = 0;
    if (s[curr] == last) {
        pick = 1 + recur(s, curr + 1, s[curr]);
    } else {
        pick = recur(s, curr + 1, s[curr]);
    }
    notpick = recur(s, curr + 1, last);
    
    return dp[curr][last - '0'] = max(pick, notpick);
}

void solve() {
    int len;
    cin >> len;

    string s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << recur(s, 0, '3') << endl;
}

int main() {
    ios_base::sync_with_stdio(false);    //ye add imp
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}