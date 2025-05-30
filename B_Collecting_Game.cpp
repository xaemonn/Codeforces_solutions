#include<bits/stdc++.h>
using namespace std;

void solve(){
  
 
  int n;
  cin>>n;
  vector<pair<long long,int>> v;
  vector<long long> pref(n);
  
  for (int i = 0; i < n;i++){
      long long num;
      cin >> num;
      v.push_back({num, i});
      
  }

  map<int,int> idx ;
  
  

  sort(v.begin(), v.end());
  for (int i = 0; i < n;i++){
      idx[v[i].second] = i;
  }

  pref[0] = v[0].first;
  for (int i = 1; i < n;i++){
      pref[i] = pref[i - 1] + v[i].first;
  }


  vector<int> ans(n);
  
  ans[n - 1] = n - 1;

  for (int i = n - 2; i >= 0; i--){
    if(pref[i]>=v[i+1].first){
        ans[i] = ans[i + 1];
    }else{
        ans[i] = i;
    }
  }

  vector<int> res(n);

  for (int i = 0; i < n;i++){
      res[i] = ans[idx[i]];
  }

  for (int i = 0; i < n;i++){
      cout << res[i] << " ";
  }
  cout << endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
}