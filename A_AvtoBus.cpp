#include<bits/stdc++.h>
using namespace std;

void solve(){
  
    long long n;
    cin>>n;
    if(n%2!=0){
        cout<<"-1"<<endl;
        return;
    }

    long long N=n/2;
     if(N==1){cout<<"-1"<<endl; return;}
    long long maxi;
    long long mini;
    maxi=N/2;

    if(N%3==0){mini=N/3;}
    else{
        mini=(N/3)+1;
    }


cout<<mini<<" "<<maxi<<endl;
   
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}