#include<bits/stdc++.h>
using namespace std;

int steps(pair<int,int> digits, string& num){
  int a=digits.first;
  int b=digits.second;
   
   int j=num.length()-1;
   int ops=0;
   while(j>0 && num[j]-'0'!=b){
    j--; ops++;
     
      
   }

   int i=j-1;
   while(i>0 && num[i]-'0'!=a){
   i--; ops++;
    
   }
   return ops;
}
void solve(){
   long long n;
   cin>>n;
   string str= to_string(n);

   int ans=1e9;
   
   vector<pair<int,int>> arr = {{0,0},{2,5},{7,5},{5,0}};

   
    
   for(auto it:arr){
        int mini=steps(it,str);
        ans= min(ans,mini);
      }

      cout<<ans<<endl;
      return;
   }





int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}