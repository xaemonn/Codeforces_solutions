

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;







void solve(){
   
   int r,c;
   cin>>r>>c;
   vector<vector<int>> v(r, vector<int>(c));

   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>v[i][j];


    }
   }

   ll sum=0;
   ll zero=0;
   ll negs=0;
    int mini=INT_MAX;
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        if(v[i][j]<0){
            negs++;
        }
        sum+=abs(v[i][j]);
        if(v[i][j]==0){
            zero++;
        }

        mini=min(mini,abs(v[i][j]));
    }
   }

   if(negs%2!=0){
    if(zero>0){
        cout<<sum<<endl;
        return;
    }
    else{
        cout<<sum-(2* mini)<<endl;
        return ;
    }
   }

   cout<<sum<<endl;
    
  
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
