#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long a,b;
  cin>>a>>b;
  if(a==b){
    cout<<"0"<<endl; return;
  }
   long long c=0;
  while(a>b){
    if(a%8==0 && (a/8)>=b){
        a=a/8;
        c++;
    }
    else if(a%4==0 && (a/4)>=b){
        a=a/4;
        c++;
    }
    else if(a%2==0 && (a/2)>=b){
        a=a/2;
        c++;
    }else{
        break;
    }
  }
  while(a<b){
    if(a*8<=b){
        a=a*8;
        c++;
    }
    else if(a*4<=b){
        a=a*4;
        c++;
    }
    else if(a*2<=b){
        a=a*2;
        c++;
    }else{
        break;
    }
  }

  if(a==b){
    cout<<c<<endl;
  }else{
    cout<<"-1"<<endl;
  }

}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}