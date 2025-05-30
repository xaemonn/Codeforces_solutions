#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
  
    sort(a.begin(), a.end());
    
   
    unordered_map<long long, long long> freq; 
    long long dist = 0; 
    int left = 0; 
    long long max_cards = 0; 
    
    for (int right = 0; right < n; right++) {
       
        freq[a[right]]++;
        
        
        if (freq[a[right]] == 1) {
            dist++;
        }
        
        
        while (dist > k ) {

            if(a[right]==a[right-1]+1)
          {  freq[a[left]]--;
            if (freq[a[left]] == 0) {
                dist--;
            }
            left++;}
            else{
                
            }
        }

        
        
        
        
        max_cards = max(max_cards,(long long) (right - left + 1));

    }
    
    
    cout << max_cards << endl;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        solve();
    }
    return 0;
}
