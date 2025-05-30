#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
 
  if(n%2){
      cout << "-1" << endl;
      return;
  }
   
   vector<int> ans(n);
   int num = 1;
   for (int i = 0; i < n;i+=2){
       ans[i]=num;
       ans[i + 1] = num;
       num++;
   }

   for (int i = 0; i < n;i++){
       cout << ans[i] << " ";
   }
   cout << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}