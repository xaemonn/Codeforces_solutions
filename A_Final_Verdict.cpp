#include <iostream>
#include <vector>

using namespace std;

bool cann(vector<int>& a, int target) {
    int n = a.size();
    long long sum = 0;
    
    
    for (int num : a) {
        sum += num;
    }
    
   
    return (sum == (long long)target * n);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (cann(a, x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}