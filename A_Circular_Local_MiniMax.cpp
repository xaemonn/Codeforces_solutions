

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;




void solve(){
  int n;
  cin >> n;
  vi arr(n);
  for (int i = 0; i < n;i++){
      cin >> arr[i];
  }

  sort(arr.begin(), arr.end());
  if(n%2){
      cout << "NO" << endl;
      return;
  }
  vi ans;
  int i = 0;
  int j = n / 2;
  while(i<n/2 && j<n){
      ans.push_back(arr[i]);
      i++; 
      
      ans.push_back(arr[j]);
      j++;
  }

  for (int i = 1; i < n - 1; i++){
    if(ans[i]>ans[i+1] && ans[i]>ans[i-1])
        continue;
   else if(ans[i]<ans[i+1] && ans[i]<ans[i-1])
        continue;
    else
        cout << "NO" << endl;
        return;
  }


      cout << "YES" << endl;
  for(auto i:ans){
      cout << i << " ";
  }
  cout << endl;
}

int main(){
    int t;
    cin >> t;

    
    
    while(t--){
        solve();
    }
    return 0;
}
