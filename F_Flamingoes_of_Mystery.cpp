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

int ask(int l, int r){
    int num;
    cout<<"? "<<l<<" "<<r<<endl;
    cin >> num;
    return num;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    int a, b, c;
    int ab = ask(1, 2);
    int ac = ask(1, 3);
    int bc = ask(2, 3);
    v[2] = ab + bc - ac;
    v[1] = ab - v[2];
    v[3] = bc - v[2];
    int sum=0;
    sum= v[1] + v[2] + v[3];
    for (int i = 4; i<=n;i++){
        int total = ask(1, i);
        v[i] = total - sum;
        sum += v[i];
    }
    cout << "! ";
    for (int i = 1; i <= n;i++){
        cout << v[i] << " ";
    }
        cout << endl;
}