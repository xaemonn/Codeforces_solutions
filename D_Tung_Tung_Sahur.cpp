

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


vector<pair<char,ll>> grp(string s){
    vector<pair<char, ll>> ans;
    int len = s.length();
    if(len==0)
        return ans;

    char curr = s[0];
    int cnt=1;
    for (int i = 1; i < len;i++){
        if(s[i]==curr){
            cnt++;
        }else{
            ans.push_back({curr, cnt});
            curr = s[i];
            cnt = 1;
        }
    }
    ans.push_back({curr, cnt});
    return ans;
}

void solve(){
    string p,s;
    cin >> p>>s;

    int slen = s.length();
    int plen = p.length();
    if(slen<plen|| slen>2*plen){
        cout << "NO" << endl;
        return;
    }

    vector<pair<char, ll>> pvec, svec;

    pvec = grp(p);
    svec = grp(s);


    if(pvec.size()!=svec.size()){
        cout << "NO" << endl;
        return;
    }

    bool valid = true;

    for (int i = 0; i < pvec.size(); i++){
        if(pvec[i].first!=svec[i].first){
            valid = false;
            break;
        }

        if(svec[i].second<pvec[i].second || svec[i].second>2*pvec[i].second){
            valid = false;
            break;
        }
    }

    if(valid){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
   { solve();}
}