#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


long long countInterestingPairs(int n, long long x, long long y, vector<long long>& a) {
    long long total_sum = 0;
    for (long long num : a) {
        total_sum += num;
    }

    long long low = total_sum - y;
    long long high = total_sum - x;

    sort(a.begin(), a.end());

    long long count = 0;

    
    for (int i = 0; i < n; i++) {
        int left = i + 1, right = n - 1, validLeft = -1, validRight = -1;

        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (a[i] + a[mid] >= low) {
                validLeft = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        
        left = i + 1;
        right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (a[i] + a[mid] <= high) {
                validRight = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

       
        if (validLeft != -1 && validRight != -1 && validLeft <= validRight) {
            count += (validRight - validLeft + 1);
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << countInterestingPairs(n, x, y, a) << endl;
    }

    return 0;
}
