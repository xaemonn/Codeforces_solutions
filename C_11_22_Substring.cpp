#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> one(n);
    vector<int> two(n);

    int cnt1 = 0;
    for (int i = 0; i < n;i++){
       if(s[i]=='1'){
           cnt1++;

       }
       else if(s[i]=='2'){
           cnt1 = 0;
       }

       one[i] = cnt1;
       if(s[i]=='/'){
           cnt1 = 0;
       }
    }

    int cnt2 = 0;
    for (int i = n - 1; i >= 0; i--){
        if(s[i]=='2'){
            cnt2++;
        }else if(s[i]=='1'){
            cnt2 = 0;
        }
        two[i] = cnt2;
        if(s[i]=='/'){
            cnt2 = 0;
        }
    }

    int ans = INT_MIN;
    for (int i = 0; i < n;i++){
           
           if(s[i]=='/'){
               int temp = min(one[i], two[i]);
               ans = max(ans, 2 * temp + 1);
           }
    }

    cout << ans << endl;
}