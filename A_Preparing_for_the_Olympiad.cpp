#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }

    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < n-1;i++){
            if(a[i]>b[i+1]){
                sumA += a[i];
                sumB += b[i+1];
            }
            
    }
   // cout << sumA << " " << sumB << endl;

    sumA += a[n - 1];
    cout << sumA - sumB << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
}