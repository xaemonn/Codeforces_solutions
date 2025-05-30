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
    ll n,m,k; cin >> n>>m>>k;
    vector<ll> req(n),house(m);
    for (int i = 0; i < n; i++) {
        cin >> req[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> house[i];
    }

    sort(all(house));
    sort(all(req));

    int cnt = 0;

    int l = 0;
    int r = 0;
    while(r<n && l<m){
        if(abs(house[l]-req[r])<=k){
            cnt++;
            l++;
            r++;
        }else if(req[r]<house[l]){
            //move to next applicant
            r++;
        }else if(house[l]<req[r]){
            //move to next house
            l++;
        }
    }

    cout << cnt << endl;
}

int main(){
    
        solve();
    
}