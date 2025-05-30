#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  int n,k;
  cin>>n>>k;
  vector<int>arr((n*k)+1);
  for(int i=1; i<= n*k ;i++){
    cin>>arr[i];
  }
  int mid=0;
  if(n%2){mid=(n+1)/2;}
  else {mid=n/2;}
  int skip=n-mid;
  long long sum=0;
  
  
  int i=(n*k)-skip;
  while(k--){
    sum+=arr[i];
    i=i-skip-1;
  }
  cout<<sum<<endl;
  return;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}