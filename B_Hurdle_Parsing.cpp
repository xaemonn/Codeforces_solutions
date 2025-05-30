#include<bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;

    vector<int> ans;
    int len = s.length();

    int cnt = 0;

    for (int i = 1; i < len; i++){
        if(s[i]=='|'){
            ans.push_back(cnt);
            cnt = 0;
        }else{
            cnt++;
        }
    }

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
     
       solve();
    
}