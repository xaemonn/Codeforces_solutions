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


int ans1(string& s,int& n ){
     int l=0;
     int r = n - 1;
     char ch;
     bool flag = false;
     int ans = 0;
     while(l<=r){
         if(s[l]==s[r]){
             l++; r--;
         }else{
             if(!flag){
                 ch = s[l];
                 l++;
                 ans++;
                 flag = true;
             }else{
                if(s[l]==ch){
                    l++;
                    ans++;
                }else if(s[r]==ch){
                    r--;
                    ans++;
                }else{
                    ans = -1;
                    break;
                }
             }
         }
     }

     return ans;
}

int ans2(string& s,int& n ){
    int l=0;
    int r = n - 1;
    char ch;
    bool flag = false;
    int ans = 0;
    while(l<=r){
        if(s[l]==s[r]){
            l++; r--;
        }else{
            if(!flag){
                ch = s[r];
                r--;
                ans++;
                flag = true;
            }else{
               if(s[l]==ch){
                   l++;
                   ans++;
               }else if(s[r]==ch){
                   r--;
                   ans++;
               }else{
                   ans = -1;
                   break;
               }
            }
        }
    }

    return ans;
}

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int r1 = ans1(s, n);
    int r2 = ans2(s, n);

    if(r1==-1 && r2==-1){
        cout << -1 << endl;
        return;
    }else if(r1==-1){
        r1 = INT_MAX;
    }else if(r2==-1){
        r2 = INT_MAX;
    }

    cout << min(r1, r2) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
   { solve();}
}