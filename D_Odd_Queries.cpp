#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,q;
  cin>>n>>q;

  vector<int>arr(n+1);
  vector<long long>prefix(n+1,0);
  for (int i = 1; i <= n; i++)
  {  
    int num;
    cin>>num;
    arr[i]=num;
    prefix[i]=num +prefix[i-1];
  }

  while(q--){
    int l,r,k;
    cin>>l>>r>>k;
    long long ans=prefix[n]-(prefix[r]-prefix[l-1])+((r-l+1)*k);
    if(ans%2!=0){
        cout<<"YES"<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
  }
  
}

int main(){
    int test;
    cin>>test;
    while(test--)
    
    {
        solve();
    }

}