#include<bits/stdc++.h>
using namespace std;

void solve(){
  
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0; i< n;i++){
            cin>>arr[i];
        }

         
         long long maxb=0;

         long long sum=0;
         for(int i=0; i<n ;i++){
            sum+=arr[i];
         }

       long long minib=static_cast<long long> (ceil(static_cast<double>(sum)/x));

        for(int i=0; i<n;i++){
           
            maxb+=static_cast<long long> (ceil(static_cast<double>(arr[i])/x));
        }
        cout<<minib<<" "<<maxb<<endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}