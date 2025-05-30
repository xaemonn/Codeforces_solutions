#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        
        cin >> num[i];
        
    }

    set<int> st;
    for (int i = 0; i < n;i++){
        st.insert(num[i]);
    }

    int total = n - 2;
    int a, b;
    for(auto& x:st){
        if(total%x==0){
            if(st.find(total/x)!=st.end()){
                a = x;
                b = total / x;
            }
        }
    }

    cout << a << " " << b << endl;
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