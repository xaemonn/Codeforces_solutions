#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x,y,k;
    cin>>x>>y>>k;
    long long num=(k*y) +k-1;
    long long den=x-1;
    long long res=(num+den-1)/ den;
    long long ans=res +k;
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}