#include<bits/stdc++.h>
using namespace std;

void solve(){
  
 
  
  

int n;
cin>>n;
vector<vector<char>> arr(n,vector<char>(4));

for(int i=0; i<n ;i++){
    for(int j=0; j<4;j++){
        cin>>arr[i][j];
    }
}

vector<int>ans(n);
for(int i=0; i<n ;i++){
    for(int j=0; j<4;j++){
           if(arr[i][j]=='#'){
            ans.push_back(j+1);
           }
    }
}
  
  
reverse(ans.begin(),ans.end());

for(int i=0; i< n;i++){
    cout<<ans[i]<<" ";
}
  
  cout<<endl;

  
  
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}