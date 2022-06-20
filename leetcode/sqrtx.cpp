#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    if(x == 0) return 0;
    int left = 1, right = x;
    while(left <= right){
        long int mid = left + (right - left) / 2;
        if((mid * mid) == x) return mid;
        else if(mid * mid < x) left = mid + 1;
        else right = mid - 1;
    }
    return right;
}

int main(){
    int n = 16;
    int res = mySqrt(n);
    cout << res << endl;
    return 0;
}