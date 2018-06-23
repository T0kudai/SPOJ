#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    unsigned long long int T,At,Bt;
    cin>>T;
    while(T--){
        cin >> At >> Bt;
        vector<int> peo(At);
        for (int i = 0; i < At;i++)
            cin >> peo[i];
    }
    return 0;
}