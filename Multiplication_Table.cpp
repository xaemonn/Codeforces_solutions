#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    
        long long low = 1;
    long long high = 1LL* n * n;
    long long ans = -1;
    long long req = ((1LL*n * n) - 1) / 2;
    while(low<=high){
        long long mid = low + (high - low) / 2;
        long long cnt = 0;
        for (int i = 1; i <= n;i++){
           if((mid/i)==0)
                break; 
            cnt += min(static_cast<long long>(n), (mid / i));
        }

        if(cnt>=req+1){
            ans = mid;
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}