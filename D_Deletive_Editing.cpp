#include<bits/stdc++.h>
using namespace std;
void solve(){
  string s,t;
  cin>>s>>t;
  unordered_map<char,int> ms, mt;
  for(auto ch:s){
    ms[ch]++;
  }

  for(auto ch:t){
    mt[ch]++;
  }

  int i=0; int j=0;
  while( i<s.size() && j<t.size()){
    if(s[i]==t[j]){
        if(ms[s[i]]<mt[t[j]]){
            break;
        }

        if(ms[s[i]]==mt[t[j]]){
            
            mt[t[j]]--;
            j++;
        }
    }
    ms[s[i]]--;
    i++;

  }

  if(j==t.size()){
    cout<<"YES"<<endl;
  }
 else
   { cout<<"NO"<<endl;}
  
}
 

int main(){
    int test;
    cin>>test;
    while(test--)
    
    {
        solve();
    }

}