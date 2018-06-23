#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        for (int i = 0; i < s.length()/2; i = i + 2)
        {
            cout << s[i];
        }
        cout << '\n';
    }
}