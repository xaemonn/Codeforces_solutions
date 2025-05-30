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
    ll n,k; 
    cin >> n>>k;

    string s;
    cin >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll mx=0;
    ll curr = 0;

    for (int i = 0; i<n ;i++){
        if(s[i]=='1')
       { curr = max(curr + v[i], v[i]);
        mx = max(curr, mx);}else{
           curr = 0;
        }
    }

    if(mx>k){
        cout<<" NO"<<endl;
       
    }else if(mx==k){
        cout << "YES" << endl;
        for (int i = 0; i < n;i++){
            if(s[i]=='0'){
              //  cout << -1e18 << " ";
              v[i] = -1e18;
            }
        }
        for (int i = 0; i < n;i++){
            cout << v[i] << " ";
        }

        cout<<endl;
        
    }else{
        int absent = -1;

        for (int i = 0; i < n;i++){
            if(s[i]=='0'){
                absent = i;
                break;
            }
        }

        if(absent==-1){
            cout << "NO" << endl;
            return;
        }

        cout << "YES" << endl;

        int suff = 0;
        int pref = 0;

        int curr = 0;
        for (int i = absent - 1; i>=0; i--){
           if(s[i]=='0'){
               break;
           } 
           curr += v[i];
           pref = max(pref, curr);
        }

        int curr2 = 0;

        for (int i = absent + 1; i < n;i++){
            if(s[i]=='0'){
                break;
            }

            curr2 += v[i];
            suff = max(suff, curr2);
        }

        v[absent] = k - suff - pref;

        for (int i = 0; i < n;i++){
            if(s[i]=='0' && i!=absent){
              //  cout << -1e18 << " ";
              v[i] = -1e18;
            }
        }

        for (int i = 0; i < n;i++){
            cout << v[i] << " ";
        }

            cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}