#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
 
  string s;
  cin>>s;

  stack<char>st;
  long long op=0;
  for(int i=0; i<n;i++){
    if(s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==')'){
        if(st.empty()){
            op++;
        }else{
            st.pop();
        }
    }
  }

  cout<<op<<endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}