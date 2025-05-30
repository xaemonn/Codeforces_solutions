#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  
  int ones=0;
  long long cnt=1;
  for(int i=0; i<n;i++){
    int num;
    cin>>num;
    if(num==0) cnt=cnt*2 ;
    else if(num==1) ones++;
  }

  cout<<ones*cnt<<endl;
  return;

}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}