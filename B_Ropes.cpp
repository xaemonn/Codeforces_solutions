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


bool check(double len,vector<double>& v, ll req){

    ll cnt = 0;
    for(auto i:v){
        ll piece = i / len;
        cnt += piece;
    }

    if(cnt>=req){
        return true;
    }

    return false;
}

void solve(){
    ll n; cin >> n;
    ll req;
    cin >> req;
    vector<double> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    double preci = 1e-7;

    double low = 0;
    double high = *max_element(v.begin(), v.end());
    double ans = 0;

    while(high-low>preci){
        double mid = (high + low) / 2;
        if(check(mid,v,req)){
            ans = max(ans,mid);
            low = mid + preci;
        }else{
            high = mid - preci;
        }

    }

    cout <<fixed<<setprecision(6)<< ans << endl;
}

int main(){
    solve();
}