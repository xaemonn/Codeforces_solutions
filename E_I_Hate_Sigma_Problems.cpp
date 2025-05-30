#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }

    long long res=0;
    for (int left = 0; left < n; ++left) {
        int dist = 0;
        map<int, int> mpp;
        
        for (int r = left; r < n; ++r) {
            if (mpp[arr[r]] == 0) {
                ++dist;
            }
            ++mpp[arr[r]];

            res += dist;
        }
    }

    cout<<res<<endl;


}