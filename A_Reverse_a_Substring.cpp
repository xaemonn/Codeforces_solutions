#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
 
  string s;
  cin>>s;
  int x=-1; int y=-1;
  for(int i=0; i<n-1 ;i++){
    if(s[i]>s[i+1]){
        x=i+1;
        y=i+2;
        break;
    }
  }

  if(x!=-1 && y!=-1)
  {   cout<<"YES"<<endl;
    cout<<x<<" "<<y<<endl;}

  else{
    cout<<"NO"<<endl;
  }
}

int main(){
    
        solve();
    
}