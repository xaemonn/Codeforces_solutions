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

vector<int> fib;

void solve(){
    ll n; cin >> n;
    ll m;
    cin >> m;
    vector<vector<ll>> v(m,vector<ll>(3));
    for (int i = 0; i < m; i++) {
        cin >> v[i][0];
        cin >> v[i][1];
        cin >> v[i][2];
    }

    string ans = "";

    for (int i = 0; i < m;i++){
        
         int w = v[i][0];
         int l = v[i][1];
         int h = v[i][2];
         

         if((h>=fib[n]+fib[n-1]|| max(w,l)>=fib[n]+fib[n-1]) && min({w,l,h})>=fib[n]){
             ans += '1';
         }else{
             ans += '0';
         }

         
    }

    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    fib.push_back(0);
    fib.push_back(1);
    fib.push_back(2);
    for (int i = 3; i <= 12;i++){
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
        while (t--)
        {
            solve();
        }
}