
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



pii poss(ll n,ll nums){
    if(n==1)
     {if(nums==1){
         return {1, 1};
     }else if(nums==2){
         return {2, 2};
     }else if(nums==3){
         return {2, 1};
     }else{
         return {1, 2};
     }}

     
     ll len= 1 << (n - 1);
     ll pro = 1LL << (2 * (n - 1));

     if(nums<=pro)
         {auto ans = poss(n - 1, nums);
         return {ans.first,ans.second};}
     if(nums<=2*pro){
         auto ans = poss(n - 1, nums - pro);
         return {ans.first+len, ans.second+len};
     }
     if(nums<=3*pro){
        auto ans = poss(n - 1, nums -2* pro);
        return {ans.first+len, ans.second};
    }else{
        auto ans = poss(n - 1, nums -3* pro);
        return {ans.first, ans.second+len};
    }
    

}

ll val(ll n,ll x,ll y){
     if(n==1){
        if(x==1 && y==1){
            return 1;
        }else if(x==2 && y==2){
            return 2;
        }else if(x==1 && y==2){
            return 4;
        }else{
            return 3;
        }
     }

     ll len= 1 << (n - 1);
     ll pro = 1LL << (2 * (n - 1));

     if(x<=len && y<=len)
         return val(n - 1, x, y);
     else if(x>len && y>len)
         return val(n - 1, x - len, y - len) + pro;
     else if(x<=len && y>len)
         return val(n - 1, x , y - len) + 3*pro;
     else
         return 2 * pro + val(n - 1, x - len, y);
}


void solve(){
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    
    while(q--){
        string s;
        cin >> s;
        if(s=="->"){
            ll x,y;
            cin >> x >> y;
            ll ans = val(n, x, y);
            cout << ans << endl;

        }else{
            ll nums;
            cin >> nums;
            auto it = poss(n, nums);
            cout << it.first << " " << it.second << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
   { solve();}
}