#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int sum = 0;
        int p = 1;
        while(true){
            long double temp = n / pow(5, p);
            p++;
            sum += int(temp);
            if(temp<1){
                break;
            }
        }
        cout << sum << '\n';
    }
}