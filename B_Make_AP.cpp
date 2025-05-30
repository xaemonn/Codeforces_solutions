#include<bits/stdc++.h>
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;

  if((2*b-c)%a==0){
    if(((2*b-c)/a)>0){
        cout<<"YES"<<endl;
        return;
    }
  }
  if((a+c)%(2*b)==0){
    if(((a+c)/(2*b))>0){
        cout<<"YES"<<endl;
        return;
    }
  }
  if((2*b-a)%c==0){
    if(((2*b-a)/c)>0){
        cout<<"YES"<<endl;
        return;
    }
  }

  cout<<"NO"<<endl;
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