#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int a = cost[0], b = cost[1];
    for(int i = 2; i < n; i++){
        int tmp = min(a, b) + cost[i];
        a = b;
        b = tmp;
    }
    return min(a, b);
}

int main(){
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    int res = minCostClimbingStairs(cost);
    cout << res << endl;
    return 0;
}