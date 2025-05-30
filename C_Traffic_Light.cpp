#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  
int n;
cin>>n;
 char c;
 cin>>c;
 string s;
 cin>>s;
  

  int curr=-1;
  s+=s;
  int ans=0;
  for(int i=0; i<2*n;i++){
   if(s[i]==c){
    int cnt=0;
    while(s[i]!='g' && i<s.size()){
        cnt++;
        i++;
    }
       ans=max(ans,cnt);
   }

   
  }

  cout<<ans<<endl;

  
  
   
  
  

  
  
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}