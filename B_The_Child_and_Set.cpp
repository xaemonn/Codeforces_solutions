#include<bits/stdc++.h>
using namespace std;

void solve(){
    int sum, limit;
    cin >> sum >> limit;

    vector<int> ans;
    for (int i = limit; i > 0;i--){
        int lowbit = INT_MAX;
        for (int j = 0; j <=30; j++){
             if((1<<j)&i){
                 lowbit = 1 << j;
                 break;
             }

        }

        if(lowbit<=sum){
            ans.push_back(i);
            sum -= lowbit;
        }
        if(sum==0){
            break;
        }
    }

    if(sum==0){
        cout << ans.size() << endl;
        for(auto i:ans){
            cout << i << " ";
        }
        cout << endl;
    }else{
        cout << "-1" << endl;
    }
}

int main(){
    solve();
}