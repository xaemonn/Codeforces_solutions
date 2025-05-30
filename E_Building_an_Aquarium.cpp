#include<bits/stdc++.h>
using namespace std;


bool possible(vector<int>& v, int water, int wall){
    long long curr = 0;
    int n = v.size();
    for (int i = 0; i < v.size(); i++){
        int diff = wall - v[i];
        if(diff>0){
            curr += diff;
        }
    }
    if(water>=curr){
        return true;
    }
    return false;
}
void solve(){

    int n, water;
    cin >> n >> water;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    int low = 1;
    int high = INT_MAX;

    int ans = 0;

    while(low<=high){

        int mid = low+ (high-low) / 2;
        if(possible(v,water,mid)){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    cout << ans << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}