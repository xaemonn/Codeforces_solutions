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

vi tcol(8, false);

void recur(vector<vector<char>>& board,ll& ways, int row){
    if(row==8){
        ways++;
        return;
    }

    for (int col=0; col < 8; col++){
         if(board[row][col]!='*'){
            if(!tcol[col]){
                int r = row;
                int tr = row;
                int c = col;
                int tc = col;
                bool safe = true;
                while(r>=0 && r<8 && c>=0&& c<8 ){
                    if(board[r][c]=='Q'){
                        safe = false;
                        break;
                    }
                    r--;
                    c--;
                }
                r = tr;
                c = tc;
                while(r>=0 && r<8 && c>=0&& c<8 ){
                    if(board[r][c]=='Q'){
                        safe = false;
                        break;
                    }
                    r--;
                    c++;
                }
                if(safe){
                    board[row][col] = 'Q';
                    tcol[col] = true;
                    recur(board, ways, row + 1);
                    board[row][col] = '.';
                    tcol[col] = false;
                }
            }
         }
    }
}

 
void solve(){
    vector<vector<char>> v(8, vector<char>(8));
    ll ans=0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> v[i][j];
        }
    }

    recur(v, ans, 0);

    cout << ans << endl;
}

int main(){
    solve();
}