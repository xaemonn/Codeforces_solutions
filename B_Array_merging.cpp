#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  

  
    int n;
    cin>>n;

    
    map<int,int> len;
    map<int,int> len2;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }

     for(int i=0; i<n;i++){
        cin>>arr2[i];
    }

     
     for(int i=0; i<n;){
        int j=i;
        while(j<n && arr1[j]==arr1[i]){
            j++;
        }

        len[arr1[i]]=max(len[arr1[i]],j-i);
        i=j;
     }
    
    for(int i=0; i<n;){
        int j=i;
        while(j<n && arr2[j]==arr2[i]){
            j++;
        }

        
         len2[arr2[i]]=max(len2[arr2[i]],j-i);
        i=j;
     }
    

    long long ans=0;
    for(auto it:len){
         ans=max(ans,(long long)it.second+ len2[it.first]);
    }

    for (auto it : len2) {
        ans = max(ans, (long long)it.second + len[it.first]);
    }

    cout<<ans<<endl;
  

  
  
   
  
  

  
  
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}