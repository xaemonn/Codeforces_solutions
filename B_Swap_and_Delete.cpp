 #include<bits/stdc++.h>
using namespace std;

void solve(){
  
   string s;
   cin>>s;
   
   int lens=s.length();
   int cnt1=0;
   int cnt0=0;
   for(int i=0; i<lens;i++){
      if(s[i]=='0'){
        cnt0++;
      }else{
        cnt1++;
      }
   }

   string t="";
   for(int i=0; i<lens;i++){
    if(s[i]=='0'){
        if(cnt1>0){
            t+='1';
            cnt1--;
        }else{
            break;
        }
    }else{
        if(cnt0>0){
            t+='0';
            cnt0--;
        }else{
            break;
        }
    }
   }

   if(t.length()==lens){
    cout<<"0"<<endl;
   }
   else{
    cout<<lens-t.length()<<endl;
   }

}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}