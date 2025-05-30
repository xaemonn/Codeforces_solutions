#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
 
  vector<int>arr(n);
  for(int i=0; i<n ;i++){
    cin>>arr[i];
  }

  sort(arr.rbegin(),arr.rend());
  for(int i=0; i<n ;i++){
    cout<<arr[i]<<" ";
  }

  cout<<endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}