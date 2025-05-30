#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  
int n,k,q;
cin>>n>>k>>q;
vector<int>arr(n);
for(int i=0; i< n;i++){
    cin>>arr[i];
}
long long res=0;
int cnt=0;
for(int i=0; i< n;i++){
    if(arr[i]<=q){
       cnt++;
    }else{
        if(cnt>=k){
        long long num=cnt-k+1;
        res+=(num*(num+1))/2;}
        cnt=0;
    }
}
 
if(cnt>0 && cnt>=k){
     long long num=cnt-k+1;
     res+=(num*(num+1))/2;}

     cout<<res<<endl;

}


   
  
  

  
  


int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}