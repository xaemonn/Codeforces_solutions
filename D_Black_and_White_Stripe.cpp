#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k;
    cin>>n>>k;

    string s;
   cin>>s;
    vector<long long>sum(n);
    if(s[0]=='W'){
        sum[0]=1;
    }else{
        sum[0]=0;
    }

    for(int i=1; i<n;i++){
        sum[i]=sum[i-1]+(s[i]=='W'? 1:0);
    }

    long long mini=LLONG_MAX;

    for (int i = k-1; i < n; i++) {
        if (i == k-1) {
            
            mini = min(sum[k-1], mini);
        } else {
            
            mini = min(sum[i] - sum[i-k], mini);
        }
    }

    
      cout<<mini<<endl;

}


int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}