#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        mp[num]++;
    }
    int cnt = 0;
    for (auto &it : mp)
    {
        int val = it.second;
        cnt += (val) / 2;
    }
    cout << cnt << endl;
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