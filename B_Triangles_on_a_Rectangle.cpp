#include<bits/stdc++.h>
using namespace std;


void solve(){
   int w,h;
   cin>>w>>h;

   int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN,m4=INT_MIN;
   int s1=INT_MAX,s2=INT_MAX,s3=INT_MAX,s4=INT_MAX;

   int n1,n2,n3,n4;

   cin>>n1;
   for(int i=0; i<n1; i++){
     int num;
     cin>>num;
     m1=max(m1,num);
     s1=min(num,s1);
   }

   cin>>n2;
   for(int i=0; i<n2; i++){
     int num;
     cin>>num;
     m2=max(m2,num);
     s2=min(num,s2);
   }
   cin>>n3;
   for(int i=0; i<n3; i++){
     int num;
     cin>>num;
     m3=max(m3,num);
     s3=min(num,s3);
   }
   cin>>n4;
   for(int i=0; i<n4; i++){
     int num;
     cin>>num;
     m4=max(m4,num);
     s4=min(num,s4);
   }

   int d1=m1-s1;
   int d2=m2-s2;
   int d3=m3-s3;
   int d4=m4-s4;

   long long ans=max(d1*h, d2*h);
   ans=max(ans,(long long)d3*w);
   ans=max(ans,(long long)d4*w);

   cout<<ans<<endl;



}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}