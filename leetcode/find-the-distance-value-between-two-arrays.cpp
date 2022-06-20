#include <bits/stdc++.h>
using namespace std;

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int res = 0;
    for(int i = 0; i < arr1.size(); i++){
        bool flag = true;
        for(int j = 0; j < arr2.size(); j++){
            if(abs(arr1[i] - arr2[j]) <= d) flag = false;
        }
        if(flag) res++;
    }
    return res;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {4,5,6,7,8,9,10,11,12,13};
    int d = 3;
    int res = findTheDistanceValue(arr1, arr2, d);
    cout << res << endl;
    return 0;
}