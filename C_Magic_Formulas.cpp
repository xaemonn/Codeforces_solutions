#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int ans = 0;
    //xors of pi
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        ans = ans ^ num;
    }

    vector<int> xors(n+1);
    
    //store all xors
    xors[0] = 0;
    for (int i = 1; i <= n;i++){
        xors[i] = xors[i - 1] ^ i;
    }


    for (int i = 1; i <= n; i++)
    {
            int blocks = n / i;
            int left = n % i;
            if(blocks&1){
                ans = ans ^ xors[i - 1];
            }
            //for leftovers
            ans = ans ^ xors[left];
    }

    cout << ans << endl;
}
