#include<bits/stdc++.h>
using namespace std;

void solve(){

  int n;
  cin>>n;

  vector<pair<int,int>> arr(n);
  for(int i=0; i<n;i++){
    int num;
    cin>>num;
    arr[i]={num,i+1};
  }

  sort(arr.rbegin(),arr.rend());
  
  vector<int>ans(n+1);
  long long res=0;
   
   int k=1;

  for(int i=0; i<n ;i+=2){
    res+=(long long) k*(arr[i].first)*2;
       ans[arr[i].second]=k;
    
     

    if(i+1<n)
     {ans[arr[i+1].second]=-k;  res+=(long long) k*(arr[i+1].first)*2;}
     k++;


    
  }
  cout<<res<<endl;
   cout<<"0"<<" ";

   for(int i=1; i<=n ;i++){
     cout<<ans[i]<<" ";
   }
   cout<<endl;


}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}