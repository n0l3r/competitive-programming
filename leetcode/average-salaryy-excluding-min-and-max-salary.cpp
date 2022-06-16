#include <bits/stdc++.h>
using namespace std;

double average(vector<int>& salary) {
    sort(salary.begin(), salary.end());
    double count = 0.0;
    for(int i = 1; i < salary.size()-1; i++){
        count += salary[i];
    }
    
    return count / (salary.size() - 2); 
}

int main(){
    vector<int> salary = {1,2,3,4,5,6,7,8,9,10};
    cout << average(salary) << endl;
    return 0;
}