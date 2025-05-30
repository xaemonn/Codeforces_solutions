#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
 int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    int neg = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if(a[i]<0){
            a[i] = -a[i];
            neg++;
        }
        sum += a[i];
        
    }
    sort(a.begin(), a.end());
    if(neg & 1) sum -= (2 * a[0]);
    cout << sum << endl;
}

int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}