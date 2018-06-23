#include<iostream>
using namespace std;
int main(){
    unsigned long long int n, m;
    int value(n);
    for (int i = 0; i < n;++i){
        cin >> value[i];
    }
    unsigned long long int curr_val=0,max_val=0;
    int begin = 0, end = 0;
    for (int i = 0; i < n;i++){
        if(curr_val<m){
            curr_val += value[i];
            end++;
            if (curr_val > m){
                curr_val -= value[begin];
                begin++;
            }
        }
        if(max_val<curr_val){
            max_val = curr_val;
        }
    }
    cout << max_val;
    return 0;
}