#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
    int res = 0;
    while(n){
        res++;
        n &= (n - 1);
    }
    return res;
}

int main(){
    uint32_t n = 11;
    int res = hammingWeight(n);
    cout << res << endl;
    return 0;
}