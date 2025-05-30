#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long start,jumps;
  cin>>start>>jumps;

  int rem=jumps%4;
  long long ans;
  if(rem==1){
        ans=-jumps;
  }
  else if(rem==2){
    ans=1;
  }
  else if(rem==3){
    ans=jumps+1;
  }
  else
  {ans=0;}
   
   if(start%2){
     cout<<start-ans<<endl; 
   }else{
    cout<<start+ans<<endl;
   }

   
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}