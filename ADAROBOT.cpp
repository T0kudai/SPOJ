#include<iostream>
using namespace std;

inline int f(int q){
    
}
inline int t(int q){
    if(q==0)
        return 0;
    return pow(f(q * (q - 1)), 3) + t(q - 2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int q;
        cin>>q;
        
    }
    return 0;
}