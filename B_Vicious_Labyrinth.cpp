#include <iostream>
#include <vector>

using namespace std;



int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        if(x%2==0){
            for (int i = 0; i < n - 2;i++){
                cout << n - 1 << " ";
            }
            cout << n << " " << n - 1 << endl; continue;
        }else{
            for (int i = 0; i < n - 1;i++){
                cout << n <<" ";
            }
            cout << n - 1 << endl;
            continue;
        }



    }
    
    return 0;
}