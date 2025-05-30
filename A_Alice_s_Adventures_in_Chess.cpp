#include<bits/stdc++.h>
using namespace std;



void solve(){

    int n,x,y;
    cin >> n>>x>>y;

    string s;
    cin >> s;
    int l = s.length();

    int cx = 0;
    int cy = 0;

    for (int k = 0; k < 10; k++){
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'N')
            {
                cy++;
            }
            else if (s[i] == 'S')
            {
                cy--;
            }
            else if (s[i] == 'E')
            {
                cx++;
            }
            else{
            cx--;
        }

        if(cx==x && cy==y){
            cout << "YES" << endl;
            return;
        }

        

    }}
    cout << "NO" << endl;
}

int main(){
     int test;
     cin>>test;
     while(test--)
       {solve();}
    
}