#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
 
  
   vector<int> v(n);
   map<int, int> mp;
   for (int i = 0; i < n;i++){
       cin >> v[i];
       mp[v[i]]++;
   }
   long long ops1 = n - 1;

   long long ext = 0;

   for(auto it:mp){
      if(it.second>1){
          ext += it.second - 1;
      }
   }

   ops1 -= ext;
   cout <<ops1<<  endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}