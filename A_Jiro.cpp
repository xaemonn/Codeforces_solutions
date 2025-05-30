#include<bits/stdc++.h>
using namespace std;

int main(){
    char x,y,z;
    cin>>x>>y>>z;
    int a=3; int b=3; int c=3;
    if(x=='>'){
        b--;
    }else{
        a--;
    }
    
    if(y=='>'){
        c--;
    }else{
        a--;
    }

    if(z=='>'){
        c--;
    }else{
        b--;
    }

    if(a==2 ){
        cout<<"A"<<endl;
    }
    else if(b==2){
        cout<<"B"<<endl;
    }else{
        cout<<"C"<<endl;
    }
}