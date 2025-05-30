#include<bits/stdc++.h>
using namespace std;

string convert(int num,int n){
    string temp = "";
    int bits = (num==0)? 1: log2(num)+1;
   
    for (int i = 0; i < n;i++){
          if(num&1){
              temp += '1';
          }else{
              temp += '0';
          }
          num = num / 2;
         
    }
    reverse(temp.begin(), temp.end());
    string ans = "";
    ans += temp[0];
    for (int i = 1; i < temp.length();i++){
        int bit = temp[i] - '0';
        int bit2 = temp[i - 1] - '0';
        char c = '0' + (bit ^ bit2);
        ans += c;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    int codes = 1 << n;   //2 ki power n

    vector<string> g;
    for (int i = 0; i < codes;i++){
        int num = i;
        string s=convert(i,n);
        g.push_back(s);
    }

    for(auto st:g){
        cout << st << endl;
    }
}