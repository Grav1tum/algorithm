#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if(n <= 2){
            cout << "NO\n";
        }
        else if(s[0] != '1' || s[1] != '0'){
            cout << "NO\n";
        }
        else{
            if(s[2] == '0'){
                cout << "NO\n";
            }
            else if(s[2] == '1' && n == 3){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
    }
    return 0;
}