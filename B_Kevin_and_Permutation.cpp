#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> ans(n);
    int j = 1;
    for (int i=k-1; i < n; i+=k,j++){
        ans[i] = j;
    }
    for (int i = 0; i < n; i++){
        if((i+1)%k!=0){
            ans[i] = j;
            j++;
        }
    }

    for (int i = 0; i <n; i++)
    {
        cout << ans[i] << " ";
    }
    
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
}