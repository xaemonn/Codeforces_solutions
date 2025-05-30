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

ll mod = 1e9 + 7;
ll maxx = 1e6;

void solve(){
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin>> v[i][j];
        }
    }

    vector<ll> ans((2 * n)+1,0);
    

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            ll val = v[i][j];
            ll idx = i + j + 2;
            if(ans[idx]==0){
                ans[idx] = v[i][j];
            }
        }
    }
    vector<ll> mp((2 * n) +1,0);

    for (int i = 2; i < 2 * n + 1; i++){
        mp[ans[i]] = 1;
    }

    for (int i = 1; i <= 2 * n;i++){
         if(!mp[i]){
             ans[1] = i;
             break;
         }
    }

    for (int i = 1; i < 2 * n + 1; i++){
        cout
            << ans[i] << " ";
    }


    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
   { solve();}
}