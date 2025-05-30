#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  
  for(int i=0; i<n ;i++){
    
    cin>>arr[i];
    
  }

  long long ops=0;
   for(int i=n-2; i>=0; i--){
       if(arr[i+1]==0){
        cout<<"-1"<<endl; return;
       }

       while(arr[i]>=arr[i+1]){
          arr[i]=arr[i]/2;
          ops++;
       }
       
   }

   cout<<ops<<endl;
   
   

   
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}