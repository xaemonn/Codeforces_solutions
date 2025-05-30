#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long n,d;
    cin>>n>>d;
    vector<long long>arr(n);


    for(int i=0; i<n;i++){
       
        cin>>arr[i];
        
    }
    sort(arr.rbegin(),arr.rend());

    long long left=n;
    int i=0;
    long long teams=0;
    while(true){
        long long power=arr[i];
        i++;
        long long req=ceil((double)(d+1)/power);
        if(left-req>=0){
            left=left-req;
            teams++;
        }else{
            break;
        }
    }

    cout<<teams<<endl;

}

int main(){
    solve();
}