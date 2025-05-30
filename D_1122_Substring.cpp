#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    

    vector<int> v(n);
    

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    unordered_map<int, int> cnt;

    int l=0;
    int ans = 0;

    for (int r = 0; r < n;r++){
        cnt[v[r]]++;

        while(cnt[v[r]]>2  ){
            cnt[v[l]]--;

            if(cnt[v[l]]==0){
                cnt.erase(v[l]);
            }
            l++;
        }

        bool valid = true;

        if(r>l && cnt[v[l]]!=2){
            cnt.erase(v[l]);
            l++;
        }

        

       

        if(cnt.size()*2==(r-l+1) && (r-l+1)%2==0){
            ans = max(ans, r - l + 1);
        }
    }

    cout << ans << endl;
}