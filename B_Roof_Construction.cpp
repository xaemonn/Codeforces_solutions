#include<bits/stdc++.h>
using namespace std;


void solve(){
   
  int n;
  cin>>n;
  int k=0;
  while((1<<k)<=n-1){ k++;}
  k--;

  for(int i=(1<<k)-1; i>=0; i--){
    cout<<i<<" ";
  }

  for(int i=(1<<k); i<n;i++){
    cout<<i<<" ";
  }

  cout<<endl;


}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}