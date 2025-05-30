#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void func(){

    ll n,k;
    cin >> n>>k;
    string s;
    cin >> s;
    vector<int> v(n);

    for (int i = 0; i < n;i++){
       
        cin >> v[i];
    }


    int firstt = -1;
    for (int i = 0; i < n;i++){
        if(s[i]=='0'){
            firstt = i;
            break;
        }
    }

        ll mini = -1e9;

    ll sum=mini;
    ll maxx = mini;


    for (int i = 0; i < n;i++){
        ll num;
        if(s[i]=='0'){
            num = mini;
        }else{
            num = v[i];
        }

        sum = max(sum + num, num);

        maxx = max(maxx, sum);
    }

    maxx = max(maxx, (long long) 0);
     

    if(maxx<k && firstt==1){
        cout << "No" << endl;
        return;
    }else if(maxx>k){
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;

    vector<ll> ans(n, mini);

    if(maxx<k){
        ans[firstt] = k;
    }

    for (int i = 0; i < n;i++){
        if(s[i]!='0'){
            ans[i] = v[i];
        }
    }

    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }

    cout << endl;
}


int main() {
    int t;
    cin >> t;
    while(t--)
      func();
    return 0;
}