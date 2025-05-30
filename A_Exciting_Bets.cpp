#include<bits/stdc++.h>
using namespace std;

void solve(){
  
   long long a,b;
   cin>>a>>b;
    if(a==b){cout<<"0"<<" "<<"0"<<endl; return;}
    if(a<b){swap(a,b);}
   long long diff=a-b;

   cout<<diff<<" "<< min(b%diff, diff-(b%diff) )<<endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}