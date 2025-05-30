#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n ;i++){
    
    cin>>arr[i];
  }

  if(n==1){cout<<"0"<<endl; return;}

  int maxi=INT_MIN;
  for (int i = 0; i <n-1; i++)
  {
      maxi=max(maxi,arr[i]-arr[i+1]);
  }

  for (int i = 1; i <n; i++)
  {
      maxi=max(maxi,arr[i]-arr[0]);
  }
  
 for (int i = 0; i <n-1; i++)
  {
      maxi=max(maxi,arr[n-1]-arr[i]);
  }
  cout<<maxi<<endl;
  return;

}

int main(){
    int test;
    cin>>test;
    while(test--)
    
    {
        solve();
    }

}