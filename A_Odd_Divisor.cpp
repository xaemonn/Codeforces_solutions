#include<bits/stdc++.h>
using namespace std;

void solve(){
  
    long long n;
    cin>>n;
    

     //odd*odd=odd
    if(n%2!=0){
        cout<<"YES"<<endl;
        return;
    }

    //powwr of 2->no other factors all other primes are odd
    if((n&(n-1))==0){
       cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}