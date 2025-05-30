#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;

  int cnt1 = 0;
  int cnt2 = 0;
  int cnt3 = 0;
  int num = n;

  while(num>0){
      int digit = num % 10;
      if(digit==1){
          cnt1++;
      }else if(digit==2){
          cnt2++;
      }else if(digit==3){
          cnt3++;
      }else{
          cout << "No" << endl;
          return;
      }
      num = num / 10;
  }

  if(cnt1==1 && cnt2==2 && cnt3==3){
      cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}

int main(){
     
       solve();
    
}