#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,q;
  cin >> n >> q;
  vector<long long > v(n);
  vector<int> x(q);

  for (int i = 0; i < n; i++)
  {
      cin >> v[i];
  }
  for (int i = 0; i < q; i++)
  {
      cin >> x[i];
  }

  int minprev = INT_MAX;

  

  for (int i = 0; i < q; i++){
      if(x[i]<minprev){
          minprev = x[i];
          for (int j = 0; j < n; j++)
          {
              long long val = 1 << x[i];
              if (v[j]% val == 0)
              {
                  v[j] += 1 << (x[i] - 1);
            }
          }
      } 
  }

  for(auto num:v){
      cout << num << " ";
  }

  cout << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}