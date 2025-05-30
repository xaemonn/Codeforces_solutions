#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

bool isprime(int x){
    for (int i = 2; i*i<=x; i++){
        if(x%i==0)
            return false;
    }
    return true;
}

bool divisible(int a){
    cout << a << endl;
    string s;
    cin >> s;
    if(s=="yes" || s=="Yes")
        return true;
    else
        return false;
}

void solve(){
    int cnt = 0;
    for (int i = 2; i <= 50 && cnt < 2; i++){
        if(isprime(i))
        {if(divisible(i)){
            cnt++;
            if(i*i<=100 && divisible(i*i)){
                cnt++;
            }
        }}
    }
    if(cnt>=2){
        cout << "composite" << endl;
    }else
        cout << "prime" << endl;
}

int main(){
   
        solve();
        
}