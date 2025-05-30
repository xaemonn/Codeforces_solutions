#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
     if(n<=4){
         cout << "-1" << endl;
         return;
     }
    vector<int> arr;

    for (int i = 2; i <= n; i+=2){
          if(i!=4){
              arr.push_back(i);
          }
    }

    arr.push_back(4);
    arr.push_back(5);

    for (int i = 1; i <= n;i+=2){
        if(i!=5){
            arr.push_back(i);
        }
    }

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}