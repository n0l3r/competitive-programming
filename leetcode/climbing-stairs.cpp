#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    int a = 1, b = 2;
    for(int i = 3; i <= n; i++){
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;
}

int main(){
    int n = 10;
    int res = climbStairs(n);
    cout << res << endl;
    return 0;
}