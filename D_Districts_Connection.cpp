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
    int n;
    cin >> n;
    vector<ll> v(n);
   
    for (int i = 0; i < n;i++){
        cin >> v[i];
       
    }

    vector<pair<ll,ll>> ans;
    int idx = -1;

    for (int i = 1; i < n;i++){
          if(v[i]!=v[0]){
              idx = i;
              ans.push_back({1, i + 1});
          }
    }

    if(idx==-1){
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < n;i++){
           if(v[i]==v[0]){
               ans.push_back({idx + 1, i + 1});
           }
    }

        cout << "YES" << endl;

        for(auto it:ans){
            cout << it.first << " " << it.second << endl;
        }
}

int main(){
    int t;
    cin >> t;
    while(t--)
   { solve();}
}