#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k){
    int left = 0, right = arr.size() - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        int num = arr[mid] - (mid + 1);
        if(num == k){
            if(mid > 0 && (arr[mid - 1] - (mid) == k)){
                right = mid - 1;
                continue;
            }
            return arr[mid] - 1;
        }

        if(num < k){
            left = mid + 1;
        } else if(num > k){
            right = mid - 1;
        }
    }

    if(right < 0) return k;

    int less = arr[right] - (right + 1);
    k -= less;

    return arr[right] + k;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int k = 5;
    cout << findKthPositive(arr, k) << endl;
    return 0;
}