#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    int numFib[n + 2];
    numFib[0] = 0;
    numFib[1] = 1;
    
    for(int i = 2; i <= n; i++){
        numFib[i] = numFib[i-1] + numFib[i-2];
    }
    return numFib[n];
}

int main(){
    int n = 10;
    cout << fib(n) << endl;
    return 0;
}