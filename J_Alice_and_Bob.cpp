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


ll gcdarr(vector<ll>& arr){
    ll ans = arr[0];
    for (int i = 0; i < arr.size();i++){
        ans = __gcd(arr[i], ans);
        if(ans==1)
            break;
    }
    return ans;
}


ll solve(vector<ll>& arr) {
    int n = arr.size();
    ll og = gcdarr(arr);
    ll maxx = og;

    vector<ll> pref(n), suff(n);

    pref[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        pref[i] = __gcd(pref[i - 1], arr[i]);
    }

    suff[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suff[i] = __gcd(suff[i + 1], arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        ll curr = 0;
        if (i == 0) {
            curr = suff[1];


        } 
        
        else if (i == n - 1) {
            curr = pref[n - 2];
        } else {
            curr = __gcd(pref[i - 1], suff[i + 1]);
        }

        
        ll neww = curr;
        ll res= __gcd(curr,neww);

        if (res > maxx) {
            maxx = res;
        }
    }

    return maxx;
}

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);     // ye use krna mandatory hai

    int t;
    cin >> t;
    while(t--)
    {int n;
    
    cin >> n;

    vector<ll> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll result = solve(arr);
    cout << result << endl;
    }

    return 0;
}