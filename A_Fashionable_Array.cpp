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
    ll n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<ll> evens, odds;
    for (int i = 0; i < n;i++){
        if(v[i]%2==0){
            evens.push_back(v[i]);
        }else{
            odds.push_back(v[i]);
        }
    }
     int cnt1 = n;
    int  cnt2=n;

    if(!evens.empty()){
         ll even1 = evens[0];
      ll even2 = evens[evens.size() - 1];
      cnt1 = 0;
      for (auto i : v)
      {
          if (i < even1 || i > even2)
          {
              cnt1++;
          }}
    }


    if(!odds.empty()){
         ll odd1 = odds[0];
    ll odd2 = odds[odds.size() - 1];
    cnt2 = 0;
    for (auto i : v)
    {
        if(i<odd1 || i>odd2){
            cnt2++;
        }}
    }

   

    
    cout << min(cnt1, cnt2) << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}