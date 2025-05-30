#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int ans = -1;
    for (int i = 0; i < n;i++){
        int temp = i + 1;
        bool valid = true;
        for (int j = 0; j < n;j++){
            if(i!=j)
             {int diff=abs(v[i]-v[j]);
             if(diff%k==0){
                 valid = false;
                 break;
             }}
        }

        if(valid){
            cout << "YES" << endl;
            cout << temp << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
       int t;
       cin>>t;
       while(t--)
       {solve();}
    
}