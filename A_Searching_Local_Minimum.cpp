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


vector<int> ask(int idx, int n){
    vector<int> v(3);

    if(idx>1){
        cout << "? " << idx - 1 << endl;
        cin >> v[0];
    }else{
        v[0] = INT_MAX;
    }

    cout << "? " << idx << endl;
    cin >> v[1];

    if(idx<=n-1){
        cout << "? " << idx + 1 << endl;
        cin >> v[2];
    }else{
        v[2] = INT_MAX;
    }

    return v;
}

void tell(int ans){
    cout << "! " << ans << endl;
}




int main(){
    int n;
    cin >> n;

    int ans=-1;

    int lo = 1;
    int hi = n;

    while(lo<=hi){
        int mid = (lo + hi) / 2;

        vector<int> v = ask(mid, n);
        
        if((v[1]<v[0]) && (v[1]<v[2])){
            ans = mid;
            break;
        }
        else if((v[1]<v[0]) && (v[1]>v[2])){
            lo = mid + 1;
        }else{
            hi = mid - 1;
        }
    }

    tell(ans);
}