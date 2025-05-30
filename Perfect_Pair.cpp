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



ll maxx = 1000001;
vector<ll> spf(maxx,0);

void sieve(){
    for (int i = 2; i < maxx;i++){
        if(spf[i]==0){
            for (int j = i; j < maxx;j+=i){
                if(spf[j]==0){
                    spf[j] = i;
                }
            }
        }
    }
}

ll getodd(ll n){
    if(n==1)
        return 1;
    ll res = 1;
    while(n>1){
        ll p = spf[n];
        ll cnt = 0;
        while(n%p ==0){
            // n divisible by prime factor
            cnt++;
            n = n / p;
        }
       if(cnt%2){
           res = res * p;
       }
    }
    return res;
}



void solve(){
    ll n; cin >> n;
    map<ll,ll> mp;
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        ll fact = getodd(num);
        mp[fact]++;
    }

    ll ans = 0;

    for(auto it:mp){
        ll freq = it.second;
        ans += freq * (freq - 1) / 2;
    }

    cout << ans << endl;
}

int main(){
     sieve();
    int t; cin >> t;
   
    while(t--){
        solve();
    }
}