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
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
     for (int i = 0; i < m; i++)
    {
        /* code */
        cin >> b[i];
    }

    ll cnt = 0;
    int l=0, r = 0;
    while(l<n && r<m){
        if(a[l]<b[r]){
            l++;
        }
        else if(b[r]<a[l]){
            r++;
        }else{
            ll cnt1 = 0;
            ll cnt2 = 0;
            int val = a[l];
            while(l<n && a[l]==val){
                cnt1++;
                l++;
            }
             while(r<m && b[r]==val){
                cnt2++;
                r++;
            }
            cnt += cnt1 * cnt2;
        }
    }
    cout << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
        solve();
    
    return 0;
}