#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  string s;
  cin>>s;
  int ones=0;
  int zero=0;
  for(int i=0; i<s.length();i++){
     if(s[i]=='1'){ones++;}
     else {zero++;}
  }
   
   int moves=min(ones,zero);

   if(moves%2==0){cout<<"NET"<<endl; return;}
   else
   cout<<"DA"<<endl;
  
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}