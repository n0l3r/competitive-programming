#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int len = nums.size();
    int count = 0;
    for(int i = 0; i < len; i++){
        if(nums[i] == val) continue;
        nums[count] = nums[i];
        count++;
    }
    return count;
}

int main(){
    vector<int> nums = {1,1,2};
    cout << removeElement(nums, 1) << endl;
    return 0;
}