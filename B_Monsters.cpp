

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


  bool custom(const pair<int,int>& a, const pair<int,int>& b){

    if(a.first==b.first){
        return a.second<b.second;
    }

    return a.first>b.first;
  }



void solve(){
  
  int n,k;
  cin>>n>>k;
 vector<pair<int,int>> v;
   for(int i=0; i<n ;i++){
    int num;
    cin>>num;
    v.push_back({num%k,i+1});
   }

   vector<int> ans;
   for(auto it:v){
    int heal=it.first;
    int idx=it.second;
    if(heal==0)
    {ans.push_back(idx);}
   }
   
    sort(v.begin(),v.end(),custom);
   for(auto it:v){
    int idx=it.second;
    if(it.first!=0)
   { ans.push_back(idx);}
   }

   

   for(auto i:ans){
       cout<<i<<" ";
   }

   cout<<endl;
   
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
