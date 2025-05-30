

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n) {
    
    for(int i=2; i*i<=n ;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
      
}


    int nextprime(int n){
        while(!isPrime(n)){
            n++;
        }
        if(isPrime(n)){
            return n;
        }

        return -1;
    }



void solve(){
   
   int d;
   cin>>d;
   
   int p=nextprime(d+1);
   int q=nextprime(p+d);

   cout<<min(1LL*p*q , 1LL*p*p*p) <<endl;


   
    
  
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
