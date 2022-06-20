#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    if(dividend == INT_MIN  && divisor == -1) return INT_MAX;
    bool isNeg = false;
    if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
        isNeg = true;
    }
    int absDividend = abs(dividend);
    int absDivisor = abs(divisor);
    int res = 0;
    while(absDividend >= absDivisor){
        int temp = absDivisor;
        int count = 1;
        while(temp <= absDividend){
            temp <<= 1;
            count <<= 1;
        }
        res += count >> 1;
        absDividend -= temp >> 1;
    }

    if(res > INT_MAX) return INT_MAX;
    if(isNeg) return ~res + 1;
    return res;
}

int main(){
    int dividend = 2147483647;
    int divisor = 1;
    cout << divide(dividend, divisor) << endl;
    return 0;
}