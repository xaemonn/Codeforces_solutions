#include<bits/stdc++.h>
using namespace std;



void solve(){

    long long n, b, c;
    cin >> n >> b >> c;

    long double i = ((long double)b - (long double)c) / (long double)b;

    long double present = 1.0 - i;

    long long ans = n * present;

    if(b==0 && c==0){
        cout << "-1" << endl;
        return;
    }
    else if(b==0 ){
        cout << n - 1 << endl;
        return;
    }

    cout << ans << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}