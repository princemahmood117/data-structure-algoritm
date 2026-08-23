#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int>arry, int target) {

    int n = arry.size();
    vector<int> ans;

    int start = 0;
    int end = n - 1;

    for(int i = 0; i < n-1; i++) {
        if(arry[start] + arry[end] == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        } else if(arry[start] + arry[end] < target) {
            start++;
        } else {
            end--;
        }
    }
    return ans;
}

int main() {
    int target = 16;
    vector <int> arry = {2,7,11,15};

    vector<int> ans = pairSum(arry, target);

    cout << "Indices are: " << ans[0] << " " << ans[1];
    return 0;
}