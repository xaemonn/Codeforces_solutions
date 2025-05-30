#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    int n = s.length();
    if(n%2!=0){
        cout << "No" << endl;
        return 0;
    }

    map<char, int> mp;

    for (int i = 0; i < n;i++){
        mp[s[i]]++;
    }

    for(auto it:mp){
        if(it.second!=2){
            cout << "No" << endl;
            return 0;
        }
    }

    for (int i = 0; i <n ;i+=2){
        if(s[i]!=s[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }

        cout << "Yes" << endl;
}