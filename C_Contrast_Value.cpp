#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;



void solve()
    {
        int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n;i++){
            int num;
            cin >> num;
            v[i] = {num, 1};
        }

        for (int i = 0; i < n-1;i++){
              if(v[i].first==v[i+1].first){
                  v[i + 1].second = 0;
              }
        }

        vector<pair<int,int>> x;
        for (int i = 0; i<n ;i++){
            if(v[i].second==1){
                x.push_back(v[i]);
            }
        }
        int sz = x.size();
        for (int i = 1; i < sz-1; i++){
              if(x[i].first>x[i-1].first && x[i].first<x[i+1].first){
                  x[i].second = 0;
              }
              if(x[i].first<x[i-1].first && x[i].first>x[i+1].first){
                  x[i].second = 0;
              }
              
        }
        int cnt = 0;
        for (int i = 0; i < sz; i++){
            if(x[i].second==1){
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    


int main(){
    int t;
    cin >>t;
    while (t--)
    {
        solve();
        }
}