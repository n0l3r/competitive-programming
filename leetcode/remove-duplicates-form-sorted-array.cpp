#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int len = nums.size();
    int count = 0;
    if(len == 0 || len == 1) return len;
    for(int i = 0; i < len; i++){
        if(i < len - 1 && nums[i] == nums[i+1]) continue;
        nums[count] = nums[i];
        count++;
    }
    return count;
}

int main(){
    vector<int> nums = {1,1,2};
    cout << removeDuplicates(nums) << endl;
    return 0;
}