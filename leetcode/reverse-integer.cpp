#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int result = 0;
    while(x != 0){
        int temp = (x % 10);
        x /= 10;
        if((result > INT_MAX / 10 || (result == INT_MAX && temp > 7)) || 
           (result < INT_MIN / 10 || (result == INT_MIN && temp < -8))){
            return 0;
        }
        result = result * 10 + temp;
    }
    return result;
}

int main(){
    int x = 123;
    cout << reverse(x) << endl;
    return 0;
}