#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long n,costp;
  cin>>n>>costp;
  vector<long long>a(n);
  vector<long long>b(n);
  
  for(int i=0; i<n ;i++){
    cin>>a[i];
    
  }
  
  for(int i=0; i<n ;i++){
    cin>>b[i];
    
  }

  vector<pair<long long,long long>>  ppl;
  for(int i=0; i<n;i++){
   
    ppl.push_back({min(costp,b[i]),a[i]});
  }

  sort(ppl.begin(),ppl.end());
  
  
  long long total=costp;
  
  long long rem=n-1;
  for(int i=0; i<n ;i++){
    total+=(min(ppl[i].second,rem))*ppl[i].first;
    rem=rem-(min(ppl[i].second,rem));
  }



  
  


  

  
  
   
  
  cout<<total<<endl;

  
  
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}