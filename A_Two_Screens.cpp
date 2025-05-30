#include<bits/stdc++.h>
using namespace std;


void solve(){
   
  string t,s;
  cin>>t>>s;

  
  int secs=0;
  int i=0; int j=0;
  int common=0;
  while(i<t.length()&& j<s.length()){
     if(t[i]==s[j]){
        common++;
        i++; j++;
     }else{
        break;
     }
  }

  if(common>0){
    secs=common+1;
  }
  secs=secs+(s.length()-common)+(t.length()-common);

  cout<<secs<<endl;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}