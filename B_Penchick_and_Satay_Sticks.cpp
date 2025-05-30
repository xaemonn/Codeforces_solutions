#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
 
  
   vector<int> v(n+1);
   for (int i = 1; i <= n;i++){
       cin >> v[i];
   }

   for (int i = 1; i <=n;i++){
    if(v[i]>i+1 || v[i]<i-1){
        cout << "NO" << endl;
        return;
    }
   }
   cout << "YES" << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}