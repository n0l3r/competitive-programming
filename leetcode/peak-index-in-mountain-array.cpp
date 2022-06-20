#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& A) {
    int n = A.size();
    int left = 0, right = n - 1;
    while(left < right){
        int mid = (left + right) / 2;
        if(A[mid] < A[mid + 1]) left = mid + 1;
        else right = mid;
    }
    return left;
}

int main(){
    vector<int> A = {0,1,2,3,4,5,6,7,8,9};
    int res = peakIndexInMountainArray(A);
    cout << res << endl;
    return 0;
}