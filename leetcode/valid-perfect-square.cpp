#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int left = 1, right = num;
    while(left <= right){
        long int mid = left + (right - left) / 2;
        if((mid * mid)  == num) return true;
        else if(mid * mid < num) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main(){
    int n = 16;
    bool res = isPerfectSquare(n);
    cout << res << endl;
    return 0;
}
