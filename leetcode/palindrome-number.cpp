#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0 || (x % 10 == 0 && x != 0)) return false;
    
    int reverse = 0;
    while(x > reverse){
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }
    return (x == reverse || x == reverse/10);
}

int main(){
    int x = 12321;
    cout << isPalindrome(x) << endl;
    return 0;
}