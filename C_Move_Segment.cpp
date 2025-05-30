
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<pair<int, int>> blocks; 
    int start = -1;

    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (start == -1) start = i; 
        } else {
            if (start != -1) {
                blocks.push_back({start, i - 1}); 
                start = -1;
            }
        }
    }

    if (start != -1) {
        blocks.push_back({start, n - 1});
    }

    string ans;
    int it1=-1;
    int it2 = -1;
    int end = -1;

    int num = 0;

    for(auto p:blocks){
        num++;
        if(num==k-1){
            it1 = p.second;
        }else if(num==k){
            it2 = p.first;
            end = p.second;
        }
    }
    string t;
    for (int i = 0; i<(it2-it1-1); i++){
        t += '0';
    }

        for (int i = 0; i < n; i++)
        {
            if (i > it1 && i < it2)
            {
            }
            else
            {
                if (i == end)
                {
                    ans += s[i];
                    ans += t;
                }else{
                    ans += s[i];
                }
            }
        }

        cout << ans<<endl;
}

int main() {
    solve();
    return 0;
}
