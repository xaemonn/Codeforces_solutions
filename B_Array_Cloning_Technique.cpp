#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  unordered_map<int,int> mp;
  for(int i=0; i<n ;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  
  

  int freq=0;
  for(auto it:mp){
    freq=max(it.second,freq);
  }

  
  long long ops=0;
  while(freq<n){
      ops++; //cloning
      if((n-freq)>=freq){
        ops+=freq;
        freq=freq*2;
      }else{
        ops=ops+(n-freq);
        freq=n;
      }
  }

  cout<<ops<<endl;
  return;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}