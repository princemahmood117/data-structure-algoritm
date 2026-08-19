#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int>arry, int target) {

    int n = arry.size();
    vector<int> ans;

    for (int i = 0; i < n-1; i ++) {
        for (int j = i+1; j < n-1; j++) {
            if(arry[i] + arry[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    };
    return ans;
}

int main() {
    int target = 9;

    vector <int> arry = {2,7,11,15};

    vector<int> ans = pairSum(arry, target);

    cout << "Indices are: " << ans[0] << " " << ans[1];

    return 0;
}