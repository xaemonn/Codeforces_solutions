#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    vector<int> evens;
    vector<int> odds;
    
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        if(num%2==0){
            evens.push_back(num);
        }else{
            odds.push_back(num);
        }
    }

    vector<int> a;
    a.insert(a.end(), evens.begin(), evens.end());
    a.insert(a.end(), odds.begin(), odds.end());

    int pts = 0;
    long long curr = 0;
    for (int i = 0; i < n;i++){
        curr += a[i];
        if(curr%2==0)
            pts++;
            while (curr%2==0)
            {
                /* code */
                curr = curr / 2;
            }
            
            
    }
    cout << pts << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--)
       solve();
    return 0;
}