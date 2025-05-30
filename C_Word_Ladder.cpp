#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int len = s.length();
    
   
    vector<string> arr;

   
    for (int i = 0; i < len; i++) {
        if (s[i] != t[i]) {
           
            if (s[i] >t[i]) {
                s[i] = t[i];  
                arr.push_back(s);  
            }
        }
    }

    
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] != t[i]) {
            s[i] = t[i];  
            arr.push_back(s); 
        }
    }

    
    cout << arr.size() << endl;

    
    for (const string& str : arr) {
        cout << str << endl;
    }

    return 0;
}
