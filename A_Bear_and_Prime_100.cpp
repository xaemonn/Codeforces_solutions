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


string ask(int num){
    cout << num << endl;
    string s;
    cin >> s;
    return s;
}


void solve(){
    int cnt = 0;
    vector<int> v = {4, 9, 25, 49};
    for (int i = 0; i < 4;i++){
        string s=ask(v[i]);
        if(s=="yes"){
            cout << "composite" << endl;
            return;
        }
    }

        for (int i = 2; i < 50; i++)
        {
            if (isprime(i))
            {
                string s = ask(i);
                if (s == "yes")
                {
                    cnt++;
                }
            }
        }

        if(cnt>=2){
            cout << "composite" << endl;
        }else{
            cout << "prime" << endl;
        }
}

int main(){
   
        solve();
        
}