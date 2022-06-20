#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
    int res = 1, sum = 0;
    while(n){
        int tmp = n % 10;
        res *= tmp;
        sum += tmp;
        n /= 10;
    }
    return res - sum;
}

int main(){
    int n = 234;
    int res = subtractProductAndSum(n);
    cout << res << endl;
    return 0;
}