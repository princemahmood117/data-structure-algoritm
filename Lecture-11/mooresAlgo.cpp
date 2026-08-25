#include <iostream>
#include <vector>
using namespace std;

int mooreAlgo(vector<int> arr) {

    int n = arr.size();

    int count = 0;
    int ans = 0;

    for(int i = 1; i < n; i++) {

        if(count == 0) {
            ans = arr[i];
        };
        if(ans = arr[i]) {
            count = count + 1;
        }
        else {
            count = count - 1;
        }
        
    }

    return ans;
};



int main() {
    

    // moore's algo do not need to sort the array

    vector<int> arr = {1,2,2,1,1,2,3,2};

    int result = mooreAlgo(arr);
    cout << "the element maximum time occured : " << result;

    return 0;
}