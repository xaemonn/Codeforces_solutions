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



bool check(ll n){
    while(n>0){
        if(n%10==7){
            return true;
        }
        n = n / 10;
    }
    return false;
}

void solve(){
    ll n;
    cin >> n;

    ll mini = LLONG_MAX;
    if(check(n)){
        cout << 0 << endl;
        return;
    }

    vector<ll> adders;
    ll curr = 9;
    while (curr <= 1e11) {  
        adders.push_back(curr);
        curr = curr * 10 + 9;
    }

    for (int i = 0; i < adders.size();i++){
        ll ops = 0;
        ll num = n;
        while(!check(num)){
            num += adders[i];
            ops++;
        }
        mini = min(mini, ops);
    }

    cout << mini << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}