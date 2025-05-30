#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  
  for(int i=0; i<n ;i++){
    cin>>arr[i];
    
  }
  

  int even=0;
  int mini=INT_MAX;
  for(int i=0; i<n;i++ ){
        if(arr[i]%2==0){even++;}
        int remainder = arr[i] % k;
        if (remainder != 0) {
            mini = min(mini, k - remainder);
        } else {
            mini = 0;  // If already divisible by k, no operation needed
        }
  }

  if(k!=4){
    cout<<mini<<endl;
    return;
  }

  if(even>=2){
    cout<<"0"<<endl;
  }
  else if(even==0){
    cout<<min(mini,2)<<endl;
  }
  else{
    for(int i=0; i<n;i++){
        if(arr[i]%4==0){
            cout<<"0"<<endl;
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