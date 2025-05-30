#include<bits/stdc++.h>
using namespace std;

int lower(vector<int>&x, int val){
    return lower_bound(x.begin(),x.end(),val)-x.begin();
}

int upper(vector<int>&x, int val){
    return upper_bound(x.begin(),x.end(),val)-x.begin()-1;
}


int main(){
    int n;
    cin>>n;

   vector< int> x(n);
   vector<int> p(n);
   for(int i=0; i<n ;i++){
      cin>>x[i];
   }

   for(int i=0; i<n ;i++){
    cin>>p[i];
   }

   vector<long long>prefix(n+1,0);

   for(int i=0; i<n;i++){
        prefix[i+1]=p[i]+prefix[i];
   }

   int q;
   cin>>q;
   while(q--){
      long long l,r;
      cin>>l>>r;
      int left=lower(x,l);
      int right=upper(x,r);

      if(left>right || left>=n || right<0){
        cout<<"0"<<endl;
      }else{
        cout<<prefix[right+1]-prefix[left]<<endl;
      }


   }
}