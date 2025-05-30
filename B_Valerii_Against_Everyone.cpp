#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  
  int n;
  cin>>n;

  map<int,int> mpp;
  bool flag=false;
  for(int i=0; i< n;i++){
    int num;
    cin>>num;
    mpp[num]++;
    if(mpp[num]>1){
        flag=true;
    }
  }


  if(flag){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }


  
  


  

  
  
   
  
  

  
  
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}