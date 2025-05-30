#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin >> s;
    map<string, int> mp;
    string prev = s.substr(0, 2);
    mp[prev]++;
    for (int i = 1; i < n;i++){
        string temp = s.substr(i, 2);
        if(mp[temp]!=0){
            if((temp!=prev)|| (temp==prev && mp[temp]>1)){
                cout << "YES" << endl;
                return;
            }
        }
        prev = temp;
        mp[temp]++;
        
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
}