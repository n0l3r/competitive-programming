#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums){
    vector<int> res;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        res.push_back(sum);
    }
    return res;
}

int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> res = runningSum(nums);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}