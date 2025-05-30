#include<bits/stdc++.h>
using namespace std;

int main(){
   map<int,int> mp;

   int n,m;
   cin>>n>>m;
   vector<int> ans;
   int og_m=m;
   while(m--){
      int fam;
      char x;
      cin>>fam;
      cin>>x;
      if(x=='F'){
        ans.push_back(-1);
      }else{
        mp[fam]++;
        if(mp[fam]==1){
            ans.push_back(1);
        }else{
            ans.push_back(-1);
        }
      }



   }
    
    for(int i=0; i<og_m ;i++){
        if(ans[i]==-1){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }



}