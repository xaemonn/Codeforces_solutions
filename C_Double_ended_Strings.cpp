

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
   string a,b;
   cin>>a>>b;

   int m=a.length();
   int n=b.length();

   int ans=m+n;

   for (int i = 0; i < m; i++)
   {
     for (int j = 1; j<=m-i; j++)
     {
         string s=a.substr(i,j);
         if(b.find(s) != string:: npos){
            int dlt=(m-j)+(n-j);
            ans=min(ans,dlt);
         } 
     }
     
   
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
