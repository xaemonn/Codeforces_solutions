#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  
  for(int i=0; i<n ;i++){
    
    cin>>arr[i];
    
  }

  int l=-1; int r=-1;
  for(int i=0; i<n ;i++){
    
     if(arr[i]!=0){
        if(l==-1 && r==-1){
            l=r=i;
        }else{
            r=i;
        }
     }
    
  }
    
   if(l==-1 && r==-1){
    //all zeroes
     cout<<"0"<<endl;
     return;
   } else {
      for(int i=l; i<=r; i++){
        if(arr[i]==0){
            cout<<"2"<<endl;
            return;
        }
      }

      cout<<"1"<<endl;

   }
   

   
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}