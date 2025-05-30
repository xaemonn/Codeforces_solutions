#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<int>> arr(n+1, vector<int>(n+1));

    for(int i=1; i<=n ;i++){
        for(int j=1; j<=i; j++){
            cin>>arr[i][j];
        }
    }
     

     int curr=1;
    for(int j=1; j<=n; j++ ){
        if(curr>=j){
            curr=arr[curr][j];
        }else{
            curr=arr[j][curr];
        }
    }

    cout<<curr<<endl;
}