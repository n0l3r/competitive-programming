#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) {
    int i = 0;
    while (n >= 0) {
        n -= ++i;
    }
    return i - 1;
}

int main(){
    int n = 5;
    cout << arrangeCoins(n) << endl;
    return 0;
}