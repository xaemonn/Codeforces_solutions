

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   
   ll a,b;
   
   cin>>a>>b;
   
   
   ll cnt=0;
   ll ans=LLONG_MAX;
   for(ll i=0; i*i<=a; i++){
     if(b==1 && i==0) continue; 

     cnt=i;
      
     ll x=a;
     while (x)
     {
        x=x/(b+i);
        cnt++;
     }

     ans=min(ans,cnt);
     
   }
   
   cout<<ans<<endl;
  
   
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
