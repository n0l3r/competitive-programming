#include <bits/stdc++.h>
using namespace std;

void helper(vector<int>& nums, vector<int>& tmp, vector<vector<int>>& res){
    if(tmp.size() == nums.size()){
        res.push_back(tmp);
        return;
    }
    for(int i = 0; i < nums.size(); i++){
        if(find(tmp.begin(), tmp.end(), nums[i]) == tmp.end()){
            tmp.push_back(nums[i]);
            helper(nums, tmp, res);
            tmp.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> tmp;
    helper(nums, tmp, res);
    return res;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = permute(nums);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}