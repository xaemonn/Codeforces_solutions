#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve(){
   
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }

    vector<int> ans(n);
    for(int i=0; i<n;i++){
        ans[i]=i+1;
    }

    int i=0;
    while(i<n){
        int shoe=v[i];

        int start=i;
        int end=i;
        while(end<n && v[end]==shoe){
            end++;
        }
        //end will be at one more than same

        if(start==end-1){
            //unique shoe
            cout<<"-1"<<endl;
            return;
        }

        rotate(ans.begin()+start, ans.begin()+start+1, ans.begin()+end);

        i=end;

    }

    for(auto s:ans){
        cout<<s<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
