#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve(){
   int n,x;
   cin>>n>>x;
   vector<ll> a(n);
   for(int i=0; i<n;i++){
    cin>>a[i];
   }

   vector<ll> prev={a[0]-x, a[0]+x};
   int chng=0;

   for(int i=1; i<n;i++){
     vector<ll> curr={a[i]-x, a[i]+x};
     vector<ll> lap={max(curr[0],prev[0]), min(curr[1],prev[1])};

     if(lap[0]>lap[1]){
        chng++;
        prev=curr;

     }else{
        prev=lap;
     }
   }

   cout<<chng<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
