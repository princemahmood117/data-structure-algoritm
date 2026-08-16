#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main() {
    
    //  subarray sum means sum of continuous //sub-array.Here anser is 18 by summing : 3, 4, 6, -5, 9

    //! why? because except "3, 4, 6, -5, 9" no other subarray can make maximum sum 18

    int n = 8;
    int arr[] = {3, 4, 6, -5, 9, -1, 0, 2};

    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int currentSum = 0;
        for(int end = start; end < n; end++) {
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Maximim subarray sum : " << maxSum << endl;



    return 0;
}