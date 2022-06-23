#include <bits/stdc++.h>
using namespace std;

int arraySign(vector<int> &nums){
    int len = nums.size();
    int count = 1;
    for(int i = 0; i < len; i++){
        if(nums[i] == 0){
            count = 0;
            break;
        } else if(nums[i] > 0){
            count *= 1;
        } else {
            count *= -1;
        }
    }
    return count;
}