#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int>& candidates, int target, int start, vector<int>& path, vector<vector<int>>& res) {
    if(target == 0) {
        res.push_back(path);
        return;
    }
    for(int i = start; i < candidates.size(); i++) {
        if(candidates[i] > target) break;
        path.push_back(candidates[i]);
        dfs(candidates, target - candidates[i], i, path, res);
        path.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> path;
    sort(candidates.begin(), candidates.end());
    dfs(candidates, target, 0, path, res);
    return res;
}

int main(){
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> res = combinationSum(candidates, target);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

