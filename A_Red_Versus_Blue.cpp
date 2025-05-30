#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,r,b;
    cin>>n>>r>>b;
    int full=0;
    int extras=0;
     
    
    full=r/(b+1);
    extras=r%(b+1);
    

    for(int i=0; i<extras;i++){
        cout<<string(full+1,'R')<<'B';
    }

    for(int i=extras; i<b;i++){
        cout<<string(full,'R')<<'B';
    }

    cout<<string(full,'R');
    
   cout<<endl;


}


int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}