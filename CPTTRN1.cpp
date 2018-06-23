#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin >> r >> c;
        for (int i = 0; i < r;i++){
            for (int j = 0; j < c;j++){
                if((i%2==0&&j%2!=0)||(j%2==0&&i%2!=0)){
                    cout << '.';
                }
                else
                    cout << '*';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}