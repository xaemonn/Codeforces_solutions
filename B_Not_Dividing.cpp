#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n ;i++){
    int num;
    cin>>num;
    if(num==1){arr[i]=2;}
    else arr[i]=num;
  }

  for(int i=1; i<n ;i++){
    if(arr[i]%arr[i-1]==0){
        arr[i]++;
    }
  }

  for(int i=0; i<n ;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}

int main(){
    int test;
    cin>>test;
    while(test--)
    
    {
        solve();
    }

}