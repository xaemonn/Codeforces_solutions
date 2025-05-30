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

    char ch;
    cin >> ch;

    bool even = false;
    bool odd = false;

    int cnt = 0;

    string s;
    cin >> s;

    int idx = -1;

    bool check = false;

    for (int i = 0; i < n;i++){
           if(s[i]!=ch){
               check = true;
               break;
       
            }
    }

    if(!check){
        cout << 0 << endl;
        return;
    }

        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == ch)
            {
                cout << 1 << endl;
           cout << i + 1 << endl;
          return; 
            }
        }

    

      

        
     for (int i = 0; i < n; i++)
        {
            if (s[i] != ch)
            {
                if ((i + 1) % 2 == 0)
                {
                    even = true;
                }
                else
                {
                    odd = true;
                }
            }
        }

    int val = 0;
    if(n%2){
        val = n;
    }else{
        val = n-1;
    }

    if(even && odd){
        cout << 2 << endl;
        cout << 2 <<" "<< val << endl;
    }else if(odd){
        cout << 1 << endl;
        cout << 2 << endl;
    }else if(even){
        cout << 1 << endl;
        cout << val << endl;
    }else{
        cout << 0 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
   { solve();}
}