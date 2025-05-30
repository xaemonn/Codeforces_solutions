

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


vi xors(3e5);

void solve(){
   int mex,xo;
   cin>>mex>>xo;

   int len=mex;
   

   

   if(xors[mex-1]==xo){
     cout<<len<<endl;
     
   }
   else{
    if((xors[mex-1]^xo)==mex){
        cout<<len+2<<endl;
    }else{
        cout<<len+1<<endl;
    }
   }

  
   
}

int main(){
    int t;
    cin >> t;

    xors[0]=0;
    for(int i=1; i<xors.size(); i++){
        xors[i]=xors[i-1]^i;
    }
    
    while(t--){
        solve();
    }
    return 0;
}
