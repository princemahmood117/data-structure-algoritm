#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorElement(vector<int> arr) {

    int n = arr.size();

    // sort the array first   // {1, 2, 1, 1, 2, 2, 1, 2, 1} becomes =  {1, 1, 1, 1, 1, 2, 2, 2, 2}
    sort(arr.begin(), arr.end());

    // frequency count
    int count = 1, ans = arr[0]; // assume the first element is the answer

    for(int i = 1; i<n; i++) {
        if(arr[i] == arr[i - 1]) {
            count++;
        } else {
            count = 1;  // reset the count to 1
            ans = arr[i];  // set the answer to the current value of array 
        }

        if(count > (n/2)) {
            return ans;
        }
    }

    return ans;

}   

int main() {

    vector <int> arr = {1, 2, 1, 1, 2, 2, 1, 2, 1};
    int result = majorElement(arr);

    cout << result;
    return 0;
}